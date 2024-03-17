#include <stdio.h>
#include <stdlib.h>

void menu_display();
void choice_select(int);
void create_new_account();
void deposit_amount();
void check_balance();
void withdraw_amount();
void file_write_new_account_data(void);
void default_menu(void);
void update_account();
void remove_account();
void exisiting_account_details();

const char *asterik = "***********************";
const char *dash = "----------------------------------------------------------------------";
FILE *customer_file_pt;

struct customer_data
{
    char customer_name[20];
    char customer_dob[10];
    char customer_address[70];
    char customer_account_type[2];
} c_data;

struct amount
{
    double deposit_amount;
    double withdraw_amount;
    double current_balance;
    double balance;
} amnt;

int main(void)
{
    customer_file_pt = fopen("Customer Data.txt", "a");
    if (customer_file_pt == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    menu_display();
    fclose(customer_file_pt);
    return 0;
}
void menu_display()
{
    char temp;
    int choice;
    printf("%s\n", dash);
    printf("%s Bank Management System %s \n", asterik, asterik);
    printf("%s\n", dash);
    printf("1. Create a new account\n");
    printf("2. Deposit amount\n");
    printf("3. Withdraw amount\n");
    printf("4. Check balance\n");
    printf("5. Update existing account\n");
    printf("6. Details of existing account\n");
    printf("7. Remove account\n");
    printf("8. Exit");

    printf("\n%s\n", dash);
    printf("Enter your choice : ");
    scanf("%d", &choice);
    temp = getchar(); // Flush the input buffer
    printf("%s", dash);
    choice_select(choice);
}

void choice_select(int choice)
{
    switch (choice)
    {
    case 1:
        create_new_account();
        break;
    case 2:
        deposit_amount();
        break;
    case 3:
        withdraw_amount();
        break;
    case 4:
        check_balance();
        break;
    case 5:
        update_account();
    case 6:
        exisiting_account_details();
    case 7:
        remove_account();
    case 8:
        exit(0);

    default:
        printf("\nWrong input.Would you like to try again? ");
        default_menu();
    }
}

void create_new_account()
{
    printf("\nEnter your name: ");
    fgets(c_data.customer_name, sizeof(c_data.customer_name), stdin);
    printf("\nEnter your Date of birth in (dd-mm-yyyy) format: ");
    fgets(c_data.customer_dob, sizeof(c_data.customer_dob), stdin);
    printf("\nEnter your permanent address: ");
    fgets(c_data.customer_address, sizeof(c_data.customer_address), stdin);
    printf("\nChoose the account type (SA/CR): ");
    fgets(c_data.customer_account_type, sizeof(c_data.customer_account_type), stdin);
    getchar();
    file_write_new_account_data();
}
void file_write_new_account_data(void)
{
    fprintf(customer_file_pt, "\nName: %s", c_data.customer_name);
    fprintf(customer_file_pt, "Date of Birth: %s", c_data.customer_dob);
    fprintf(customer_file_pt, "\nPermanent address: %s", c_data.customer_address);
    fprintf(customer_file_pt, "Account type: %s", c_data.customer_account_type);
    printf("Your account has been created successfully!");
    default_menu();
}

void deposit_amount(void)
{
    amnt.deposit_amount = 0;
    printf("\nEnter the amount to be deposited: ");
    scanf("%lf", &amnt.deposit_amount);
    printf("%.2lf has been successfully deposited to your account", amnt.deposit_amount);
    amnt.current_balance += amnt.deposit_amount;
    default_menu();
}

void withdraw_amount(void)
{
    printf("\nEnter the amount to be withdrawn: ");
    scanf("%lf", &amnt.withdraw_amount);
    if (amnt.withdraw_amount > amnt.current_balance)
    {
        printf("\nInsufficient amount, please try again with lower deduction.");
        default_menu();
    }
    else
    {
        amnt.current_balance -= amnt.withdraw_amount;
        printf("%.2lf has been successfully withdrawn from your account", amnt.withdraw_amount);
        default_menu();
    }
}

void check_balance()
{
    printf("\nCurrent balance in your account: %.2f", amnt.current_balance);
    default_menu();
}

void default_menu(void)
{
    int input_check;
    printf("\nPress 1 to go back to the main menu. Press 0 to terminate : ");
    scanf("%d", &input_check);
    if (input_check == 1)
    {
        menu_display();
    }
    else if (input_check == 0)
    {
        exit(0);
    }
    else
    {
        printf("Wrong input. Please try again");
        default_menu();
    }
}

void update_account()
{
}
void remove_account()
{
}
void exisiting_account_details()
{
}
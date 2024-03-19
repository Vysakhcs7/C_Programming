#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//------------------------------------------------------------------------------------------------------------------
void menu_display();
void main_menu_select(int);
void create_new_account();
void deposit_amount();
void check_balance();
void withdraw_amount();
void file_write_new_account_data(void);
void default_menu(void);
void update_account();
void remove_account();
void exisiting_account_details();
void account_search();
void account_login();
void login_menu_select(int);
//------------------------------------------------------------------------------------------------------------------
#define MAX_INPUT_SIZE 100
const char *asterik = "***********************";
const char *dash = "----------------------------------------------------------------------";
FILE *customer_file_pt;
//------------------------------------------------------------------------------------------------------------------
struct customer_data
{
    char customer_name[MAX_INPUT_SIZE];
    char customer_dob[MAX_INPUT_SIZE];
    char customer_address[MAX_INPUT_SIZE];
    char customer_account_type[MAX_INPUT_SIZE];
    char customer_account_number[MAX_INPUT_SIZE];
} c_data;
//------------------------------------------------------------------------------------------------------------------
struct amount
{
    double deposit_amount;
    double withdraw_amount;
    double current_balance;
    double balance;
} amnt;
//------------------------------------------------------------------------------------------------------------------
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
//------------------------------------------------------------------------------------------------------------------
void menu_display()
{
    char temp;
    int choice;
    printf("%s\n", dash);
    printf("%s Bank Management System %s \n", asterik, asterik);
    printf("%s\n", dash);
    printf("1. Create a new account\n");
    printf("2. Account Login\n");
    printf("3. Account search\n");
    printf("4. Remove account\n");
    printf("5. Exit");
    printf("\n%s\n", dash);
    printf("Enter your choice : ");
    scanf("%d", &choice);
    temp = getchar(); // Flush the input buffer
    printf("%s", dash);
    main_menu_select(choice);
}
//------------------------------------------------------------------------------------------------------------------
void main_menu_select(int choice)
{
    switch (choice)
    {
    case 1:
        create_new_account();
        break;
    case 2:
        account_login();

        break;
    case 3:
        account_search();

        break;
    case 4:
        remove_account();
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("\nWrong input.Would you like to try again? ");
        default_menu();
    }
}
//------------------------------------------------------------------------------------------------------------------
void create_new_account()
{
    printf("\nEnter your name: ");
    fgets(c_data.customer_name, sizeof(c_data.customer_name), stdin);
    printf("%s", c_data.customer_name);
    printf("\nEnter your Date of birth in (dd-mm-yyyy) format: ");
    fgets(c_data.customer_dob, sizeof(c_data.customer_dob), stdin);
    printf("%s", c_data.customer_dob);
    printf("\nEnter your permanent address: ");
    fgets(c_data.customer_address, sizeof(c_data.customer_address), stdin);
    printf("%s", c_data.customer_address);
    printf("\nChoose the account type (SA/CR): ");
    fgets(c_data.customer_account_type, sizeof(c_data.customer_account_type), stdin);
    printf("%s", c_data.customer_account_type);
    printf("\nEnter the account number: ");
    fgets(c_data.customer_account_number, sizeof(c_data.customer_account_number), stdin);
    printf("%s", c_data.customer_account_number);

    file_write_new_account_data();
}
//------------------------------------------------------------------------------------------------------------------
void file_write_new_account_data(void)
{
    fprintf(customer_file_pt, "\n");
    fprintf(customer_file_pt, "%s\n", dash);
    fprintf(customer_file_pt, "Name: %s", c_data.customer_name);
    fprintf(customer_file_pt, "Date of Birth: %s", c_data.customer_dob);
    fprintf(customer_file_pt, "Permanent address: %s", c_data.customer_address);
    fprintf(customer_file_pt, "Account type: %s", c_data.customer_account_type);
    fprintf(customer_file_pt, "Account number: %s", c_data.customer_account_number);
    fprintf(customer_file_pt, "%s\n", dash);
    printf("\nYour account has been created successfully!");
    default_menu();
}
//------------------------------------------------------------------------------------------------------------------
void account_login()
{
    char dummy_charctr;
    char temp_acc_no[MAX_INPUT_SIZE];
    int  temp_choice;
    printf("%s\n", dash);
    printf("%s Bank Management System %s \n", asterik, asterik);
    printf("%s\n", dash);
    printf("\nEnter the account number: ");
     fgets(temp_acc_no, sizeof(temp_acc_no), stdin);
    
   int compare_value = strcmp(c_data.customer_account_number,temp_acc_no);
   if(compare_value == 0)
   {
    printf("\nLogin Successful!!");
    printf("\n1. Deposit amount\n");
    printf("2. Withdraw amount\n");
    printf("3. Check balance\n");
    printf("4. Update existing account\n");
    printf("5. Details of existing account\n");
    printf("\n%s\n", dash);
    printf("Enter your choice : ");
    scanf("%d", &temp_choice);
    printf("%s", dash);
    login_menu_select(temp_choice);
   }
   else{
     printf("\nLogin Unsuccessful.Please try again");
      default_menu();
   }
}
//------------------------------------------------------------------------------------------------------------------
void login_menu_select(int temp_choice)
{
    switch (temp_choice)
    {
    case 1:
        deposit_amount();
        break;
    case 2:
        withdraw_amount();

        break;
    case 3:
        check_balance();

        break;
    case 4:
        update_account();
        break;
    case 5:
        exisiting_account_details();
        break;
    default:
        printf("\nWrong input.Would you like to try again? ");
        default_menu();
    }
}
//------------------------------------------------------------------------------------------------------------------
void deposit_amount(void)
{
    amnt.deposit_amount = 0;
    printf("\nEnter the amount to be deposited: ");
    scanf("%lf", &amnt.deposit_amount);
    printf("%.2lf has been successfully deposited to your account", amnt.deposit_amount);
    amnt.current_balance += amnt.deposit_amount;
    default_menu();
}
//------------------------------------------------------------------------------------------------------------------
void withdraw_amount(void)
{
    int temp_acc_no;
    printf("\nEnter the account number: ");
    scanf("%d", &temp_acc_no);
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
//------------------------------------------------------------------------------------------------------------------
void check_balance()
{
    printf("\nCurrent balance in your account: %.2f", amnt.current_balance);
    default_menu();
}
//------------------------------------------------------------------------------------------------------------------
void update_account()
{
}
//------------------------------------------------------------------------------------------------------------------
void exisiting_account_details()
{
    
}
//------------------------------------------------------------------------------------------------------------------
void account_search()
{
}
//------------------------------------------------------------------------------------------------------------------
void remove_account()
{
}
//------------------------------------------------------------------------------------------------------------------

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
//------------------------------------------------------------------------------------------------------------------
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
void header(void);
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
    header();
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
void header(void)
{
    system("cls");
    printf("%s\n", dash);
    printf("%s Bank Management System %s \n", asterik, asterik);
    printf("%s\n", dash);
}
//------------------------------------------------------------------------------------------------------------------
void main_menu_select(int choice)
{
    header();
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
    header();
    printf("\nEnter your name: ");
    fgets(c_data.customer_name, sizeof(c_data.customer_name), stdin);  
    printf("\nEnter your Date of birth in (dd-mm-yyyy) format: ");
    fgets(c_data.customer_dob, sizeof(c_data.customer_dob), stdin);   
    printf("\nEnter your permanent address: ");
    fgets(c_data.customer_address, sizeof(c_data.customer_address), stdin);
    printf("\nChoose the account type (SA/CR): ");
    fgets(c_data.customer_account_type, sizeof(c_data.customer_account_type), stdin);
    printf("\nEnter the account number: ");
    fgets(c_data.customer_account_number, sizeof(c_data.customer_account_number), stdin);
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
    fprintf(customer_file_pt, "Account number: %s",c_data.customer_account_number);
    fprintf(customer_file_pt, "%s\n", dash);
    printf("\nYour account has been created successfully!");
    default_menu();
}
//------------------------------------------------------------------------------------------------------------------
void account_login()
{
    char temp_acc_no[MAX_INPUT_SIZE];
    int temp_choice;
    printf("\nEnter the account number: ");
    scanf("%s", temp_acc_no);

    customer_file_pt = fopen("Customer Data.txt", "r");
    if (customer_file_pt == NULL)
    {
        printf("Error opening file!\n");
        // Handle file opening error
    }

    char line[MAX_INPUT_SIZE];
    while (fgets(line, sizeof(line), customer_file_pt) != NULL)
    {
        // Check if the line contains the account number
        if (strstr(line, "Account number: ") != NULL)
        {
            char acc_no[MAX_INPUT_SIZE];
            sscanf(line, "Account number: %s", acc_no);

            // Compare the account numbers
            if (strcmp(acc_no, temp_acc_no) == 0)
            {
                printf("\nLogin Successful!!");
                // Read and process the remaining lines for this account
                // Parse and display account details
                printf("\n1. Deposit amount\n");
                printf("2. Withdraw amount\n");
                printf("3. Check balance\n");
                printf("4. Update existing account\n");
                printf("5. Details of existing account\n");
                scanf("%d",&temp_choice);
                login_menu_select(temp_choice);
                //default_menu();
            }
        }
    }

    // If loop finishes without finding a matching account number
    printf("\nLogin Unsuccessful. Please try again\n");
    default_menu();
}

//------------------------------------------------------------------------------------------------------------------
void login_menu_select(int temp_choice)
{
    header();
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
    header();
    amnt.deposit_amount = 0;
    printf("\nEnter the amount to be deposited: ");
    scanf("%lf", &amnt.deposit_amount);
    amnt.current_balance += amnt.deposit_amount;
    printf("%.2lf has been successfully deposited to your account", amnt.deposit_amount);
      fprintf(customer_file_pt, "Name: %s", c_data.customer_name);Deposit: 
    default_menu();
}
//------------------------------------------------------------------------------------------------------------------
void withdraw_amount(void)
{
    header();
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
    header();
    printf("\nCurrent balance in your account: %.2f", amnt.current_balance);
    default_menu();
}
//------------------------------------------------------------------------------------------------------------------
void update_account()
{
    header();
}
//------------------------------------------------------------------------------------------------------------------
void exisiting_account_details()
{
    header();
}
//------------------------------------------------------------------------------------------------------------------
void account_search()
{
    header();
}
//------------------------------------------------------------------------------------------------------------------
void remove_account()
{
    header();
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
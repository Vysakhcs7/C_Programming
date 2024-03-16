#include <stdio.h>
#include <stdlib.h>

void menu_display();
void choice_select(int);
void create_new_account();
void deposit_amount();
void check_balance();
void withdraw_amount();
void file_write_new_account_data(void);

const char *asterik = "***********************";
const char *dash = "----------------------------------------------------------------------";
FILE *customer_file_pt;

struct customer_data
{
    char customer_name[20];
    char customer_dob[10];
    char customer_address[50];
    char customer_account_type[2];
} cd;

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
    int choice;
    printf("%s\n", dash);
    printf("%s Bank Management System %s \n", asterik, asterik);
    printf("%s\n", dash);
    printf("1. Create a new account\n");
    printf("2. Deposit amount\n");
    printf("3. Withdraw amount\n");
    printf("4. Check balance\n");
    printf("5. Exit");
    printf("\n%s\n", dash);
    printf("Enter your choice : ");
    scanf("%d", &choice);
    printf("%s", dash);
    choice_select(choice);
}

void choice_select(int choice)
{
    int input_check;
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
        exit(0);

    default:
        printf("\nWrong input.Would you like to try again? ");
        printf("\nPress 1 to go back to the main menu.Press 0 to terminate : ");
        scanf("%d", &input_check);
        if (input_check)
        {
            menu_display();
        }
        else
        {
            exit(0);
        }
    }
}

void create_new_account()
{
    char temp;
    printf("\nEnter your name: ");
    scanf("%c", &temp);
    fgets(cd.customer_name, sizeof(cd.customer_name), stdin);
    printf("\nEnter your Date of birth in (dd-mm-yyyy) format: ");
    scanf("%c", &temp);
    fgets(cd.customer_dob, sizeof(cd.customer_dob), stdin);
    printf("\nEnter your permanent address: ");
    scanf("%c", &temp);
    fgets(cd.customer_address, sizeof(cd.customer_address), stdin);
    printf("\nChoose the account type (SA/CR): ");
    scanf("%c", &temp);
    fgets(cd.customer_account_type, sizeof(cd.customer_account_type), stdin);
    file_write_new_account_data();
}
void file_write_new_account_data(void)
{
    fprintf(customer_file_pt, "\nName: %s", cd.customer_name);
    fprintf(customer_file_pt, "Date of Birth: %s", cd.customer_dob);
    fprintf(customer_file_pt, "\nPermanet address: %s", cd.customer_address);
    fprintf(customer_file_pt, "Account type: %s", cd.customer_account_type);
}

void deposit_amount(void)
{
    printf("Depositing amount...\n");
}

void withdraw_amount()
{
    printf("Withdraw\n");
}

void check_balance()
{
    printf("Balance\n");
}
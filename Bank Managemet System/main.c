#include <stdio.h>

void menu_display();
void choice_select(int);
void create_new_account();
void deposit_amount();

const char *asterik = "***********************";
const char *dash = "----------------------------------------------------------------------";

int main(void)
{
    menu_display();
    return 0;
}
void menu_display()
{
    int choice;
    printf("%s\n", dash);
    printf("%s Bank Management System %s \n", asterik, asterik);
    printf("%s\n", dash);
    printf("\n\n");
    printf("1. Create new account\n");
    printf("2. Deposit amount\n");
    printf("3. Withdraw amount\n");
    printf("\n\n");
    printf("Enter your choice : ");
    scanf("%d\n", &choice);
    choice_select(choice);
}

void choice_select(int choice)
{
    switch(choice)
    {
        case 1: 
                create_new_account();
                break;
        case 2: 
                deposit_amount();
                break;
        default:
                printf("Your entered choice is wrong");
    }

}

void create_new_account()
{
    printf("Hai");
}
void deposit_amount()
{

}

#include <stdio.h>
#include <time.h>
#include <string.h>

void user_input(void);
void print(void);
float cal_sub_total(int quantity, float unit_price);

const char *separator = "--------------------------------------------------------------";
const char *title = "Amma Stores";
const char *footer = "Thank You, Visit us again";
const char *text = "Please enter the details";

char customer_name[10];
int num_of_item;
char item_name[10][10];
int quantity[10];
float unit_price[10];
float sub_total[10];
int num;
float total_price = 0;
char flag;

int main(void)
{

    user_input();
    return 0;
}

void user_input(void)
{
    int user_input_spaces = (strlen(separator) - strlen(text)) / 2;
    printf("\n%s\n", separator);
    printf("%*s%s\n", user_input_spaces, "", text);
    printf("%s\n", separator);
    printf("Enter the customer name : ");
    scanf("%s", customer_name);
    printf("\nEnter the number of items : ");
    scanf("%d", &num_of_item);
    for (int num = 0; num < num_of_item; num++)
    {
        printf("\nEnter the name of the item %d: ", num + 1);
        scanf("%s", item_name[num]);
        printf("\nEnter the quantity : ");
        scanf("%d", &quantity[num]);
        printf("\nEnter the unit price : ");
        scanf("%f", &unit_price[num]);
    }
     print();
}

void print()
{
    FILE *fptr;
    fptr = fopen("Invoice.txt", "a");
    time_t current_time;
    struct tm *time_info;
    current_time = time(NULL);
    time_info = localtime(&current_time);
    int title_spaces = (strlen(separator) - strlen(title)) / 2;
    fprintf(fptr, "\n%s\n", separator);
    fprintf(fptr, "%*s%s\n", title_spaces, "", title);
    fprintf(fptr, "%s\n", separator);
    fprintf(fptr, "\nInvoice No.   : %d", 1);
    fprintf(fptr,"\nDate\t      : %02d-%02d-%04d\n", time_info->tm_mday, time_info->tm_mon + 1, time_info->tm_year + 1900);
    fprintf(fptr,"Time          : %02d:%02d:%02d\n", time_info->tm_hour, time_info->tm_min, time_info->tm_sec);
    fprintf(fptr, "Customer Name : %s", customer_name);
    fprintf(fptr, "\n%s\n", separator);
    fprintf(fptr, "Item Name\tQuantity\tUnit Price\tSub Total\n\n");
    for (num = 0; num < num_of_item; num++)
    {
        fprintf(fptr, "%s\t\t%d\t\t%.2f\t\t%.2f", item_name[num], quantity[num], unit_price[num], sub_total[num] = cal_sub_total(quantity[num], unit_price[num]));
        total_price += sub_total[num];
        fprintf(fptr, "\n");
    }
    fprintf(fptr, "\n%s\n", separator);
    fprintf(fptr, "Total Price : %.2f", total_price);
    fprintf(fptr, "\n%s\n", separator);
    int footer_spaces = (strlen(separator) - strlen(footer)) / 2;
    fprintf(fptr, "%*s%s\n", footer_spaces, "", footer);
    fprintf(fptr, "%s", separator);
    fprintf(fptr,"\n\n\n");
    fclose(fptr);

    printf("\nWould you like to generate another bill ? (y/n) : ");
    scanf(" %c",&flag); //Space before %c is needed or else it will read the previous \n
    if (flag == 'y')
    {
        user_input();
    }
    else if(flag == 'n')
    {
        return;
    }
}

float cal_sub_total(int quantity, float unit_price)
{
    return quantity * unit_price;
}

/*

#include <stdio.h>
#include <time.h>
#include <string.h>

#define MAX_ITEMS 10

struct Item {
    char name[20];
    int quantity;
    float unit_price;
    float sub_total;
};

struct Invoice {
    char customer_name[20];
    int num_of_items;
    struct Item items[MAX_ITEMS];
    float total_price;
};

const char *separator = "--------------------------------------------------------------";
const char *title = "Amma Stores";
const char *footer = "Thank You, Visit us again";
const char *text = "Please enter the details";

void user_input(struct Invoice *invoice);
void print_invoice(const struct Invoice *invoice);
float cal_sub_total(int quantity, float unit_price);

int main(void) {
    struct Invoice invoice;

    user_input(&invoice);
    print_invoice(&invoice); // Open the file in the main function after printing invoice
    return 0;
}

void user_input(struct Invoice *invoice) {
    int i;
    int user_input_spaces = (strlen(separator) - strlen(text)) / 2;
    printf("\n%s\n", separator);
    printf("%*s%s\n", user_input_spaces, "", text);
    printf("%s\n", separator);
    printf("Enter the customer name : ");
    scanf("%s", invoice->customer_name);
    printf("\nEnter the number of items : ");
    scanf("%d", &invoice->num_of_items);
    for (i = 0; i < invoice->num_of_items; i++) {
        printf("\nEnter the name of the item %d: ", i + 1);
        scanf("%s", invoice->items[i].name);
        printf("\nEnter the quantity : ");
        scanf("%d", &invoice->items[i].quantity);
        printf("\nEnter the unit price : ");
        scanf("%f", &invoice->items[i].unit_price);
        invoice->items[i].sub_total = cal_sub_total(invoice->items[i].quantity, invoice->items[i].unit_price);
    }
    invoice->total_price = 0;
    for (i = 0; i < invoice->num_of_items; i++) {
        invoice->total_price += invoice->items[i].sub_total;
    }
}

void print_invoice(const struct Invoice *invoice) {
    FILE *fptr;
    int i;
    fptr = fopen("Invoice.txt", "a");
    time_t current_time;
    struct tm *time_info;
    current_time = time(NULL);
    time_info = localtime(&current_time);
    int title_spaces = (strlen(separator) - strlen(title)) / 2;
    fprintf(fptr, "\n%s\n", separator);
    fprintf(fptr, "%*s%s\n", title_spaces, "", title);
    fprintf(fptr, "%s\n", separator);
    fprintf(fptr, "\nInvoice No.   : %d", 1);
    fprintf(fptr,"\nDate\t      : %02d-%02d-%04d\n", time_info->tm_mday, time_info->tm_mon + 1, time_info->tm_year + 1900);
    fprintf(fptr,"Time          : %02d:%02d:%02d\n", time_info->tm_hour, time_info->tm_min, time_info->tm_sec);
    fprintf(fptr, "Customer Name : %s", invoice->customer_name);
    fprintf(fptr, "\n%s\n", separator);
    fprintf(fptr, "Item Name\tQuantity\tUnit Price\tSub Total\n\n");
    for (i = 0; i < invoice->num_of_items; i++) {
        fprintf(fptr, "%s\t\t%d\t\t%.2f\t\t%.2f\n", invoice->items[i].name, invoice->items[i].quantity,
                invoice->items[i].unit_price, invoice->items[i].sub_total);
    }
    fprintf(fptr, "\n%s\n", separator);
    fprintf(fptr, "Total Price : %.2f", invoice->total_price);
    fprintf(fptr, "\n%s\n", separator);
    int footer_spaces = (strlen(separator) - strlen(footer)) / 2;
    fprintf(fptr, "%*s%s\n", footer_spaces, "", footer);
    fprintf(fptr, "%s", separator);
    fprintf(fptr,"\n\n\n");
    fclose(fptr);
}

float cal_sub_total(int quantity, float unit_price) {
    return quantity * unit_price;
}
*/
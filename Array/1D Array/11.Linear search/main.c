#include <stdio.h>
#define ARRAY_SIZE 5
int arr[ARRAY_SIZE];
void find_element(void);
void get_array(void);

int main(void)
{
    get_array();
    return 0;
}

void get_array(void)
{

    printf("Enter %d elements :\n",ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    find_element();
}

void find_element(void)
{
    int num, flag = 0;
    printf("Enter the number to find:\n");
    scanf("%d", &num);
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (num == arr[i])
        {
            flag = 1;
            printf("%d was found at %d location\n", num, i + 1);
        }
    }
    if (flag == 0)
    {
        printf("%d was not found\n", num);
    }
}
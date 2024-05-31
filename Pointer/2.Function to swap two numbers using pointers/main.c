/*
2 - Write a function to swap two numbers using pointers
Swap two numbers using pointers.
Sample execution :
Test case 1 :
Sample input :
10 20
Expected output :
Before swapping :
10 20
After swapping :
20 10
*/
#include <stdio.h>

void swap(int *ptr_num1, int *ptr2_num2)
{
    int temp;
    temp = *ptr_num1;
    *ptr_num1 = *ptr2_num2;
    *ptr2_num2 = temp;
}

int main()
{
    int num1, num2;
    printf("Enter first number : \n");
    scanf("%d", &num1);
    printf("Enter second number : \n");
    scanf("%d", &num2);
    printf("Before swapping: \n");
    printf("%d %d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter swapping: \n");
    printf("%d %d", num1, num2);
    return 0;
}

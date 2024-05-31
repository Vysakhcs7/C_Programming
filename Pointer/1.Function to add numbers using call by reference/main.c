/*
1 - Write a function to add numbers using call by reference.

Test case 1 :
Enter the num1 value : 5
Enter the num2 value : 6
Expected output :
The sum of 5 and 6 is : 11

Test case 2 :
Enter the num1 value : 10
Enter the num2 value : 15
Expected output :
The sum of 10 and 15 is : 25
*/
#include <stdio.h>
int sum(int *ptr_num1, int *ptr_num2)
{
    int result = (*ptr_num1 + *ptr_num2);
    return result;
}
int main(void)
{
    int num1, num2, result;
    printf("Enter the num1 value :\n");
    scanf("%d", &num1);
    printf("Enter the num2 value :\n");
    scanf("%d", &num2);
    result = sum(&num1, &num2);
    printf("The sum of %d and %d is : %d\n",num1,num2,result);
    return 0;
}

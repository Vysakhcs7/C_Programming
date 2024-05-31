/*
3 - Write a function to input and print array elements using pointer
Test case 1 :
Input array size is : 5
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Expected output : 
Array elements are : 1 2 3 4 5
*/

#include <stdio.h>

void print_array(int *ptr_array, int size)
{
    printf("\nArray elements are :\n");
       for (int i = 0; i<size; i++)
    {
        printf("%d\t",*(ptr_array+i));
    }

}

int main()
{
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements: \n");
    for (int i = 0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    print_array(array,size);
    return 0;
}

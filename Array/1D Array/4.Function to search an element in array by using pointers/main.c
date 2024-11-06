/*
4 - Write a function to search an element in array by using pointers
Sample execution :
Test case 1 :
Enter the array size : 5
Enter the array elements :
element - 0 : 10
element - 1 : 20
element - 2 : 30
element - 3 : 40
element - 4 : 50
Input element to search : 30
Expected output :
30 exists in the array

Test case 2 :
Enter the array size : 3
Enter the array elements :
element - 0 : 12
element - 1 : 24
element - 2 : 36
Input element to search: 20
Expected output :
20 doesn't exist in the array.
*/
#include <stdio.h>

void print_element(int *ptr_array, int size, int num_search)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (num_search == *(ptr_array + i))
        {
            flag = 1;
        }
           
    }
    if(flag)
    {
        printf("%d exists in the array\n", num_search);

    }
    else{
         printf("%d doesn't exists in the array\n", num_search);
    }
    
}

int main()
{
    int size, num_search;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input element to search : \n");
    scanf("%d",&num_search);
    print_element(array, size, num_search);
    return 0;
}

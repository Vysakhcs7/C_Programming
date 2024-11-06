/*
Description:

Read 'n' and 'n' no.of elements of array.
Check for the unique number in the array.
Print only the unique numbers from the given array.

Sample output:
Test case 1:
Enter the size of the array: 4
Enter 4 elements: 3 2 2 5
The unique elements found in the array are : 3 5  

Test case 2:
Enter the size of the array: 6
Enter 6 elements: 5 5 3 1 2 5
The unique elements found in the array are : 3 1 2 
*/


#include <stdio.h>
int main(void)
{
    int arr_size, n = 0, k = 0;

    printf("Enter the size of the array:");
    scanf("%d", &arr_size);
    int arr_elements[arr_size];

    printf("Enter %d elements: \n",arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr_elements[i]);
    }

      for (int i = 1; i < arr_size; i++)
    {
        if(arr_elements[n] == arr_elements[i])
        {
            break;
        }
    }

    printf("The unique elements found in the array are : \n");
    for (int l = 0; l < arr_size; l++)
    {
        printf("%d\n", arr_elements[l]);
    }
    return 0;
}
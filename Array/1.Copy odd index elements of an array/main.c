/*
Description:

Read the size 'n' and n elements from the user.
Copy the odd index values to another array.
Print the values.

Sample output:
Test case 1:
Enter the size of the array: 3
Enter 3 elements: 15 10 20
The elements stored in the first array are : 15 10 12
The elements stored in the second array are : 10

Test case 2:
Enter the size of the array: 5
Enter 5 elements: 25 20 30 10 35
The elements stored in the first array are : 25 20 30 10 35
The elements stored in the second array are : 20 10
*/

#include <stdio.h>
int main(void)
{
    int arr_size, n = 0, k = 0;
    printf("Enter the size of the array:");
    scanf("%d", &arr_size);
    int arr_elements[arr_size];
    int arr_odd_index[arr_size];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr_elements[i]);
    }
    for (int j = 0; j < arr_size; j++)
    {
        if (j % 2 != 0)
        {
            arr_odd_index[n] = arr_elements[j];
            k = k + 1;
            n = n + 1;
        }
    }
    printf("Elements stored in the first array are: \n");
    for (int l = 0; l < arr_size; l++)
    {
        printf("%d\n", arr_elements[l]);
    }
    printf("Elements stored in the second array are: \n");
    for (int m = 0; m < k; m++)
    {
        printf("%d\n", arr_odd_index[m]);
    }

    return 0;
}

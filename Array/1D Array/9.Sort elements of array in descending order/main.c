/*
Sample output:

Test case 1:
Input the size of array : 3
Input 3 elements in the array :
5    9     1
After sorting:
9 5 1

Test case 2:
Input the size of array : 5
Input 5 elements in the array :
9    7     12     10     15
After sorting:
15 12 10 9 7
*/

#include <stdio.h>
int main(void)
{
    int arr_size, max_element, min_element, temp, k = 0;

    printf("\nEnter the number of elements to be stored in the array :\n");
    scanf("%d", &arr_size);
    int arr_elements[arr_size];
    int desc_arr[arr_size];

    printf("Enter %d elements: \n", arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr_elements[i]);
    }

    for (k = 0; k < arr_size - 1; k++)
    {
        int j = 1;
        for (j = j + k; j < arr_size; j++)
        {
            if (arr_elements[k] < arr_elements[j])
            {
                temp = arr_elements[k];
                arr_elements[k] = arr_elements[j];
                arr_elements[j] = temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d\n", arr_elements[i]);
    }

    return 0;
}
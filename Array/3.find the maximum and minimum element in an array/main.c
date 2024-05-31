/*
Sample output:

Test case 1:
Enter the number of elements to be stored in the array :  3
45 25 21
Maximum element : 45
Minimum element : 21

Test case 2:
Enter the number of elements to be stored in the array :5
12 21 25 40 50
Maximum element : 50
Minimum element : 12
*/

#include <stdio.h>
int main(void)
{
    int arr_size, max_element, min_element;

    printf("Enter the number of elements to be stored in the array :");
    scanf("%d", &arr_size);
    int arr_elements[arr_size];

    printf("Enter %d elements: \n", arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr_elements[i]);
    }

    max_element = arr_elements[0];

    for (int l = 1; l < arr_size; l++)
    {
        if (max_element > arr_elements[l])
        {
            max_element = max_element;
        }
        else
        {
            max_element = arr_elements[l];
        }
    }

    min_element = arr_elements[0];

    for (int l = 1; l < arr_size; l++)
    {
        if (min_element < arr_elements[l])
        {
            min_element = min_element;
        }
        else
        {
            min_element = arr_elements[l];
        }
    }

    printf("Maximum element : %d\n", max_element);
    printf("Minimum element : %d\n", min_element);
    return 0;
}
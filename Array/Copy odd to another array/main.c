/* 1 - Write a C program to copy the elements of odd index from one array into another array. */

#include <stdio.h>
int main(void)
{
    int arr_size;
    printf("Eter the size of the array : ");
    scanf("%d", &arr_size);
    int arr_1[arr_size], arr_2[arr_size];
    printf("Enter %d elements:\n", arr_size);

    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr_1[i]);
    }

    printf("The elements stored in the first array are: ");
    for (int j = 0; j < arr_size; j++)
    {
        printf("\n%d", arr_1[j]);
    }

    printf("\nThe elements stored in the second array are: ");
    int m = 1;

    for (int l = 0; ; l++)
    {

        arr_2[l] = arr_1[m];
        m = m + 2;
        if (m > arr_size)
        {
            break;
        }
        
        printf("\n%d", arr_2[l]);
    }
}
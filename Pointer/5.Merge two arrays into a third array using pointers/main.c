/*
5 - Write a C program to merge two arrays into a third array using pointers.
Sample execution :
Test case 1 :
Enter size for array 1 and array 2 : 3 2
Enter the array 1 elements : 1 2 3
Enter the array 2 elements : 4 5
Sample output :
Merged array : 1 2 3 4 5
Test case 2 :
Enter size for array 1 and array 2 : 2 2
Enter the array 1 elements : -2 -3
Enter the array 2 elements : -4 5
Sample output :
Merged array : -2 -3 -4 5
*/

#include <stdio.h>

void merge_array(int *ptr_array1, int array_size1, int *ptr_array2, int array_size2)
{
    int h =0;
    int merged_array[array_size1 + array_size2];

    for (int i = 0; i < array_size1; i++)
    {
        merged_array[i] = *(ptr_array1 + i);
    }

    for (int j = array_size1; j < (array_size1 +array_size2); j++)
    {
        merged_array[j] = *(ptr_array2 + h);
        h++;
    }
     printf("Merged array :\n");
    for (int k = 0; k < (array_size1 + array_size2); k++)
    {
        printf("%d\n", merged_array[k]);
    }
}

int main()
{
    int array_size1, array_size2, num_search;
    printf("Enter the size of the array 1 and array 2: \n");
    scanf("%d %d", &array_size1, &array_size2);
    int array1[array_size1];
    int array2[array_size2];
    printf("Enter the array 1 elements: \n");
    for (int i = 0; i < array_size1; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter the array 2 elements: \n");
    for (int i = 0; i < array_size2; i++)
    {
        scanf("%d", &array2[i]);
    }

    merge_array(array1, array_size1, array2, array_size2);
    return 0;
}
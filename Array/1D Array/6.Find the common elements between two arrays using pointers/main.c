/*
6 - Write a C program to find the common elements between two arrays using pointers.
Test case 1 :
Enter size for array 1 and array 2 : 3 3
Enter the array 1 elements : 1 2 3
Enter the array 2 elements : 4 3 5
Sample output :
Common elements : 3

Test case 2 :
Enter size for array 1 and array 2 : 2 2
Enter the array 1 elements : -2 -3
Enter the array 2 elements : -4 5
Sample output :
No common elements found
*/
#include <stdio.h>

void find_common(int *ptr_array1, int array_size1, int *ptr_array2, int array_size2)
{
    int flag = 0;
    for (int i = 0; i < array_size1; i++)
    {

        for (int j = 0; j < array_size2; j++)
        {
            if (*(ptr_array1 + i) == *(ptr_array2 + j))
            {
                flag = 1;
                printf("Common element : %d\n", *(ptr_array1 + i));
            }
        }
    }
    if (!flag)
    {
        printf("No common elements found\n");
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

    find_common(array1, array_size1, array2, array_size2);
    return 0;
}
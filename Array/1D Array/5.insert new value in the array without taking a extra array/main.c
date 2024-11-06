/*
Sample output:
Test case 1:
Input the size of array : 4
Input 4 elements in the array :
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the position, where the value to be inserted : 2
Expected Output :
The current list of the array :
1 8 7 10
After inserting the element, the new list is :
1 5 8 7 10

Test case 2:
Input the size of array : 6
Input 6 elements in the array :
element - 0 : 1
element - 1 : 5
element - 2 : 10
element - 3 : 7
element - 4 : 3
element - 5 : 12
Input the value to be inserted : 15
Input the position, where the value to be inserted : 4
Expected Output :
The current list of the array :
1 5 10 7 3 12
After inserting the element, the new list is :
1 5 10 15 7 3 12
*/

#include <stdio.h>
int main(void)
{
    int arr_size, max_element, min_element, temp, insert_val, pos;

    printf("Input the size of the array :\n");
    scanf("%d", &arr_size);
    arr_size = arr_size + 1;
    int arr_elements[arr_size];

    printf("Input %d elements in the array: \n", arr_size-1);
    for (int i = 0; i < arr_size -1; i++)
    {
        scanf("%d", &arr_elements[i]);
    }

    printf("\nInput the value to be inserted : \n");
    scanf("%d", &insert_val);
    printf("Input the position, where the value to be inserted :\n");
    scanf("%d", &pos);
    printf("The current list of the array :");
           for (int i = 0; i < arr_size-1; i++)
    {
        printf("%d\t", arr_elements[i]);
    }

    for (int i = (arr_size -1); i > (pos-1); i--)
    {
        arr_elements[i] = arr_elements[i-1];
    }
    arr_elements[pos-1] = insert_val;
    printf("\nAfter inserting the element, the new list is: \n");
       for (int i = 0; i < arr_size; i++)
    {
        printf("%d\t", arr_elements[i]);
    }
    return 0;
}
/*
Sample execution :
Test case 1:
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Expected output :
The largest element in the array is : 5

Test case 2:
Input the number of elements to be stored in the array :4
Input 4 elements in the array :
element - 0 : 50
element - 1 : 35
element - 2 : 40
element - 3 : 20
Expected output :
The largest element in the array is : 50
*/

#include <stdio.h>
int find_largest(int arr[], int size)
{
    int biggest;
    biggest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (biggest > arr[i])
        {
            biggest = biggest;
        }
        else
        {
            biggest = arr[i];
        }
    }
    return biggest;
}

int main(void)
{
    int size;
    printf("Input the number of elements to be stored in the array :\n");
    scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array :\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int biggest = find_largest(arr, size);
    printf("The largest element in the array is : %d\n", biggest);
    return 0;
}
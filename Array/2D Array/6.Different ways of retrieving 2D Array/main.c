#include <stdio.h>

int arr[3][2] = {
                    {1, 2},
                    {3, 4},
                    {5, 6}
                };

int main()
{
    // Declare a pointer to an array of 2 integers
    int (*ptr)[2] = arr;  // This points to arr[0], the first array of 2 integers

    // Accessing memory addresses and values using both array indexing and pointer notation
    printf("Using array notation:\n");
    printf("Address of arr: %p\n", arr);                    // Base address of the array (arr)
    printf("Address of arr + 1: %p\n", arr + 1);            // Address of arr[1] (2nd row)
    printf("Address of &arr[0][0]: %p\n", &arr[0][0]);      // Address of the first element
    printf("Value at arr[0][0]: %d\n", arr[0][0]);          // First element value: 1
    printf("Address of &arr[0][0] + 1: %p\n", &arr[0][0] + 1); // Address of second element in row 0
    printf("Value at arr[0][1]: %d\n", arr[0][1]);          // Second element in the first row: 2
    printf("Value at *(&arr[0][0] + 1): %d\n", *(&arr[0][0] + 1)); // Dereferencing to get arr[0][1]

    printf("%p\n",&arr[0][1]);
    printf("%p\n",arr[0]);
    printf("%p\n",arr[0] + 1);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0] + 1);
    
    // Printing some memory addresses related to arr as a whole
    printf("Address of &arr: %p\n", &arr);                  // Address of the whole array
    printf("Address of &arr + 1: %p\n", &arr + 1);          // Next block after the whole array

    // Pointer arithmetic to access different parts of the array
    printf("\nUsing pointer notation with ptr:\n");
    printf("Address of ptr: %p\n", ptr);                    // Same as arr, points to arr[0]
    printf("Address of ptr + 1: %p\n", ptr + 1);            // Points to arr[1] (next row)
    printf("Value at *ptr[0]: %d\n", (*ptr)[0]);            // Value at arr[0][0] = 1
    printf("Value at *ptr[0] + 1: %d\n", (*ptr)[1]);        // Value at arr[0][1] = 2

    // Accessing other elements using pointer arithmetic
    printf("Value at *(ptr + 1)[0]: %d\n", (*(ptr + 1))[0]); // Value at arr[1][0] = 3
    printf("Value at *(ptr + 1)[1]: %d\n", (*(ptr + 1))[1]); // Value at arr[1][1] = 4
    printf("Value at *(ptr + 2)[0]: %d\n", (*(ptr + 2))[0]); // Value at arr[2][0] = 5
    printf("Value at *(ptr + 2)[1]: %d\n", (*(ptr + 2))[1]); // Value at arr[2][1] = 6

    // Using double dereferencing to get the same result
    printf("\nUsing double dereferencing (ptr + offset):\n");
    printf("Value at *(*(ptr + 0) + 0): %d\n", *(*(ptr + 0) + 0)); // Value at arr[0][0] = 1
    printf("Value at *(*(ptr + 0) + 1): %d\n", *(*(ptr + 0) + 1)); // Value at arr[0][1] = 2
    printf("Value at *(*(ptr + 1) + 0): %d\n", *(*(ptr + 1) + 0)); // Value at arr[1][0] = 3
    printf("Value at *(*(ptr + 1) + 1): %d\n", *(*(ptr + 1) + 1)); // Value at arr[1][1] = 4
    printf("Value at *(*(ptr + 2) + 0): %d\n", *(*(ptr + 2) + 0)); // Value at arr[2][0] = 5
    printf("Value at *(*(ptr + 2) + 1): %d\n", *(*(ptr + 2) + 1)); // Value at arr[2][1] = 6

    return 0;
}

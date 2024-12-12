/*
*Pointer Arithmetic in C

In C, pointer arithmetic depends on the type of the pointer. When you increment
a pointer (e.g., ptr + 1), the pointer moves forward by the size of the type that 
it points to, not by a single byte.

Example:
If ptr is an int *, then ptr + 1 moves the pointer forward by sizeof(int) bytes.
If ptr is a pointer to an array of 3 integers (int (*ptr)[3]), then ptr + 1 moves 
forward by the size of an entire array of 3 integers, i.e., sizeof(int) * 3 bytes.

(ptr + 1) - ptr Without Typecasting
In this case, ptr is of type int (*)[3], meaning it points to an array of 3 integers. 
When you perform the operation ptr + 1, you move the pointer to the next array of 3 integers.

So:
ptr points to &arr, the base address of the first array (which is your only array in this case).
ptr + 1 points to the next hypothetical array of 3 integers (even though it doesn't exist, 
the arithmetic works conceptually).
The distance between ptr + 1 and ptr is 1 array of 3 integers. So, the result of:
is 1, because you're measuring the distance in terms of arrays of 3 integers, not bytes. Pointer 
subtraction gives the number of elements (in this case, arrays of size 3) between the two pointers.

Why Cast to char *?
When you cast to char *, you're dealing with pointers to individual bytes. In C, sizeof(char) 
is always 1, so arithmetic on char * pointers happens in single-byte steps.
ptr + 1 still moves the pointer by the size of an entire array of 3 integers.
But since the pointers are now char *, the subtraction will give you the difference in bytes.
For example, if sizeof(int) is 4 bytes:

ptr + 1 will be 12 bytes ahead of ptr (because 3 * sizeof(int) = 12).
So the result of (char *)(ptr + 1) - (char *)(ptr) will be 12
*/


#include <stdio.h>
#define RUN 0
int main()
{
    int arr[3] = {1,2,3};
    int (*ptr) [3] = &arr;
    
    #if RUN == 1
    printf("Size of array is : %ld",(ptr+1) - (ptr) );
    #else
    printf("Size of array is : %ld",(char *)(ptr+1) - (char *)(ptr) );
    #endif
    return 0;
}
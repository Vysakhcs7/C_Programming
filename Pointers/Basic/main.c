#include <stdio.h>
void increment(int x);
    void increment(int *y);
int main(void)
{

    /*Variable Declaration*/
    int val = 5;
    int num1 = 30;
    char a = 'x';
    float num2 = 12.4;
    double num3 = 18.3;

    /*Pointer Declaration*/
    int *p1 = &num1;
    char *p2 = &a;
    float *p3 = &num2;
    double *p4 = &num3;
    /*Value and address of variable using different notation*/
    printf("Value of num1 = %d\n", num1);
    printf("Value of num1 = %d\n", *p1);
    printf("Value of num1 = %d\n", *(&num1));

    printf("Address of num1 = %u\n", &num1);
    printf("Address of num1 = %u\n", p1);

    printf("Address of p1 = %u\n", &p1);

    /* Size of Pointer will depende upon the architecture, microprocessor word size and compiler
       If it is 32bit generally it will be 4bytes and 8bytes if it is 64bit.
       If your machine is 64-bit but the size of your pointer is 4 bytes, it means that you are compiling 32-bit code.*/
    printf("Size of (p1) = %d , Size of (*p1) = %d\n", sizeof(p1), sizeof(*p1));
    printf("Size of (p2) = %d , Size of (*p2) = %d\n", sizeof(p2), sizeof(*p2));
    printf("Size of (p3) = %d , Size of (*p3) = %d\n", sizeof(p3), sizeof(*p3));
    printf("Size of (p4) = %d , Size of (*p4) = %d\n", sizeof(p4), sizeof(*p4));

    /*Pointer arithmetic*/
    printf("Value of p1 = %u\n", p1);
    printf("Value of p2 = %u\n", p2);
    printf("Value of p3 = %u\n", p3);
    printf("Value of p4 = %u\n", p4);
    p1++;
    p2++;
    // p3++;
    p4++;
    printf("Updated Value of p1 = %u\n", p1);
    printf("Updated Value of p2 = %u\n", p2);
    printf("Updated Value of p3 = %u\n", p3);
    printf("Updated Value of p4 = %u\n", p4);

    /*Postfix/Prefix increment/decrement*/
    printf("Prefix increment value of p1 = %u\n", ++p1);
    printf("Postfix increment value of p1 = %u\n", p1++);
    printf("Current Value of p1 = %u\n", p1);
    printf("Prefix decrement value of p1 = %u\n", --p1);
    printf("Postfix decrement value of p1 = %u\n", p1--);
    printf("Value of p1 = %u\n", p1);

    /*pointer to pointer*/
    float **pptr = &p3;
    printf("Address of p3 = %u\n", &p3);
    printf("Value of *p3 = %.2f\n", *p3);
    printf("Value of p3 = %u\n", p3);
    printf("Value of pptr =  %u\n", pptr);
    printf("Value of *pptr =  %u\n", *pptr);
    printf("Value of **pptr =  %.2f\n", **pptr);
    printf("Address of pptr = %u\n", pptr);

    /*Pointer to an array (Array Pointer)*/
    int array[5] = {1, 2, 3, 4, 5};
    int(*pta)[5];
    pta = &array; // pta references the whole array

    printf("Address of pta = %p\n", &pta);
    printf("Address of the array = %p\n", pta);
    printf("Address of the first element in the array = %p\n", *pta[0]);
    printf("Address of the second element in the array = %p\n", *pta + 1);
    printf("Value of the first element = %d\n", **pta);
    printf("Value of the first element = %d\n", *pta[0]);
    printf("Value of the second element = %d\n", **pta + 1);
    printf("Addres of array + 1 = %d\n", pta + 1); // 5*4 =20

    /*Pointers and Functions*/
    /* Call by Value*/
    printf("Before calling the function: %d\n", val);
   increment(val);
    printf("After calling the function: %d\n", val);



int main() {
    int num = 5;

    printf("Before calling the function: %d\n", num);

    // Call the function by passing the address of num
    increment(&num);

    printf("After calling the function: %d\n", num);

    return 0;
}

// Function definition
void increment(int *x) {
    (*x)++; // Increment the value stored at the address pointed by x
    printf("Inside the function: %d\n", *x);
}
}

   //Function definition
    void increment(int x)
   {
        x++; // Increment the value of x
        printf("Inside the function: %d\n", x);
   }
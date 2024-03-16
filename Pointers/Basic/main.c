#include <stdio.h>
int main(void)
{

    /*Variable Declaration*/
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
}
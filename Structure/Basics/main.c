#include <stdio.h>
#include <string.h>
struct student
{
    int rollNo;
    char name[30];
    float marks;
};

int main(void)
{
    struct student s1;
    s1.rollNo = 12;
    strcpy(s1.name, "Vysakh");
    s1.marks = 56.7;

    struct student *ptr = &s1;

    printf("Printing Address:\n");
    printf("s1 - %p\n", &s1);
    printf("ptr - %p\n",&ptr);
    printf("s1.rollNo - %p\n", &s1.rollNo);
    printf("s1.name - %p\n", &s1.name);
    printf("s1.marks - %p\n", &s1.marks);
    printf("\nPrinting Values: \n");
    printf("s1 - %d\n", s1);
    printf("s1.rollNo - %d\n", s1.rollNo);
    printf("s1.name - %s\n", s1.name);
    printf("s1.marks - %f\n", s1.marks);
    printf("\nPrinting Pointer: \n");
    printf("Address of ptr - %p\n",&ptr);
    printf("Value at address ptr - %p\n",ptr);
    printf("Dereferencing ptr - %d\n",*ptr);
    printf("Dereferencing ptr to roll no - %d\n",(*ptr).rollNo);
    printf("Dereferencing ptr to roll no - %d\n",ptr->rollNo);
    return 0;
}

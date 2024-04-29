//Size of union is taken according to the size of the largest member of the union.

#include<stdio.h>
union test{
    int a;
    char b;
    double c;
}var1;

int main(void)
{
    var1.a = 65;
    printf("a = %d\n",var1.a);
    printf("b = %c\n",var1.b);
    printf("c = %lf\n",var1.c);
    printf("Size = %ld\n\n",sizeof(union test));

    union test var2;
    union test *ptr = &var2;
    var2.a = 90; 
    printf("a = %d\n",(*ptr).a);
    printf("b = %c\n",ptr->b);
    printf("c = %lf\n",ptr->c);

    return 0;
}
//Test code
#include<stdio.h>

#define MIN_LIMIT       10
#define MAX_LIMIT       100

int main(void)
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);

    if(( x >= MIN_LIMIT) && (x <= MAX_LIMIT))
    {
        printf("In range\n");
    }
    else
    {
        printf("Out of range\n");
    }
    return 0;
}
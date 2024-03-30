#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "string_test.h"
int main(void)
{
    char *str = "Deposited amount is";
    char *ptr;
    if( ptr = strstr(str,"amount"))
    {
      printf("%s\n",ptr);
       
    }
else
{
    printf("Error");
}
   
    return 0;
}
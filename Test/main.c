#include<stdio.h>
int main(void)
{
    int count = 0;
    char *str1 = "Hello";
    char str2[100];
    int j = 0; 
    while(*str1 != '\0')
    {
        str2[j] = *str1;
        j++;
        str1++;
    }
    for(int i = 0; i != '\0'; i++)
    {
        printf("%c",str2[i]);
    }
    return 0;
}

#include <stdio.h>

int string_cmp(char *, char *);

int main()
{
	char *str1 = " ";
    char *str2 = " ";
	string_cmp(str1,str2);
	return 0;
}

int string_cmp(char *str1, char *str2){
 while( (*str1 != '\0') || (*str2 != '\0') ){
     if(*str1 != *str2){
         printf("Strings are not equal");
         return 0;
     }
     str1++;
     str2++;
 }   
   printf("Strings are equal");
}
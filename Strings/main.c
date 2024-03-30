//-------------------------------------------------------------------------------------
// strlen()
// Syntax - size_t strlen(char const *string);
// size_t - unsigned integer
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    int i = 0;
    int count = 0;
    char *str = "Hai";
    char arr[] = "Hello There";
    printf("1Length of the string is : %u\n", strlen(str));
    printf("2Length of the string is : %u\n", strlen(arr));
    while (arr[i] != '\0')
    {
        i++;
    }
    printf("3Length of the string is : %d\n", i);
    while (*str != '\0')
    {
        count++;
        *(str += 1);
    }
    printf("4Length of the string is : %d", count);
    return 0;
}
*/
//-------------------------------------------------------------------------------------
// strcmp()
// Syntax - int strcmp(const char *s1, const char *s2);
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    int i = 0;
    int n = 0;
    char *str1 = "Hello Ther";
    char *str2 = "Hello there ";
    for(i = 0; str1[i] == str2[i]; i++)
    {
        if(str1[i] == '\0')
        {
            return 0;
        }
    }
    return 0;
}

#include <stdio.h>

int main(void) {
    char *str1 = " ";
    char *str2 = "";
    int isEqual = 1; // Assume strings are equal until proven otherwise

    // Iterate through each character of both strings
    while (*str1 != '\0' || *str2 != '\0') {
        if (*str1 != *str2) {
            isEqual = 0; // Strings are not equal
            break;       // Exit loop early, no need to continue comparison
        }
        str1++; // Move to the next character in str1
        str2++; // Move to the next character in str2
    }

    if (isEqual)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
*/
//-------------------------------------------------------------------------------------
// strcpy()
// Syntax - char *strcpy(char *s1, const char s2);
// str1 - Destination string
// str2 - Source string
/*
#include <stdio.h>
#include <string.h>
void lib_fn(void);
void user_fn(void);
int main(void)
{
    lib_fn();
    user_fn();
    return 0;
}

void lib_fn(void)
{
    char str1[20];
    char *str2 = "HELLO WORLD!";
    strcpy(str1, str2);
    printf("%s\n", str2);
    printf("%s\n", str1);
}

void user_fn(void)
{
    char str1[20];
    char *str2 = "HELLO WORLD!";
    int i = 0;
     while(*str2 != '\0')
     {
          str1[i] = *(str2++);
          i++;

     }
      str1[i] = '\0'; // Add null terminato
    printf("%s",str1);

}
*/
//-------------------------------------------------------------------------------------
// strcat()
// Syntax - char *strcat(char *str1, const char *str2);
// str1 - Destination string
// str2 - Source string
/*
#include <stdio.h>
#include <string.h>
void lib_fn(void);
void user_fn_pointer(void);
int main(void)
{
    //lib_fn();
    user_fn_pointer();
    return 0;
}

void lib_fn(void)
{
    char str1[30] = "Hello";
    char *str2 = "how are you";
    strcat(str1, str2);
    printf("%s\n", str1);
    printf("%s\n", str2);
}
void user_fn_pointer(void)
{
    int i = 0;
    char str1[30] = "Hello";
    char *str2 = "how are you";
    char *ptr = str1;
    while(*ptr != '\0')
      *ptr++;
     while(*ptr++ = *str2++);
    printf("%s\n",str1);
}
*/

//-------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------

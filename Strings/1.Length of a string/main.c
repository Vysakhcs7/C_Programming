#include<stdio.h>
#include<string.h>

//#define ARRAY
#define POINTER

#if defined (ARRAY)
int main(void){
    char str[30];
    int count = 0;
    int i = 0;
    printf("Enter the string: \n");
    fgets(str,sizeof(str),stdin);
    while((str[i]) != '\0' && str[i] != '\n'){
        count++;
        i = i+1;
    }
    printf("length of the string is : %d\n",count);
    return 0;
}
#elif defined (POINTER)
#include<stdlib.h>

int main(void)
{
    char *str;
    int size = 30;
    str = (char *)malloc(size * sizeof(int));
      if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    int count = 0;
    printf("Enter the string: \n");
    fgets(str,size,stdin);
     while( ((*str) != '\0') && ((*str) != '\n') )
     {
        count++;
        str++;
    }
    printf("length of the string is : %d\n",count);
    return 0;
}
#endif
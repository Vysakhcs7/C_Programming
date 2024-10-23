/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int arr[3][2] = {
                    {1,2},
                    {3,4},
                    {5,6}
                };
                
int main()
{
    // int (*ptr) [2] = arr;
    
    printf("%p\n",arr);
    
    printf("%p\n",arr + 1);
     
    printf("%p\n",&arr[0][0]);
     
    printf("%d\n",arr[0][0]);
    
    printf("%p\n",(&arr[0][0] + 1));
    
    printf("%p\n",&arr[0][1]);
    
    printf("%d\n",arr[0][1]);
        
    printf("%d\n",*(&arr[0][0] + 1));
    
    printf("%p\n",&arr);
    
    printf("%p\n",&arr + 1);
      
    printf("%p\n",arr);
    
    printf("%p\n",arr + 1);
    
    printf("%p\n",arr[0]);
    
    printf("%p\n",arr[0] + 1);
    
    printf("%p\n",&arr[0]);
    
    printf("%p\n",&arr[0] + 1);
    return 0;
}
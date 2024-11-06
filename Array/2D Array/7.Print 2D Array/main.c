#include <stdio.h>
int arr[2][2] = {
                    {1,2},
                    {3,4}    
                };
                
void print(int (*) [2]);
int main()
{
    print(arr);
    return 0;
}

void print(int (*ptr) [2]){
   for(int i = 0; i < 2; i++ )
   {
        for(int j = 0; j < 2; j++ )
   {
       printf("%d\n", *(*(ptr+i)+j) );
   }
   }
}
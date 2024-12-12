#include <stdio.h>

int sum(int a, int b){
    return a +b;
}

int subtract(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    if(b == 0 ){
        printf("Cannot divide\n");
        return -1;
    }else{
         return a/b;
    }
   
}

int main()
{
    int (*fptr[4]) (int,int) = {sum,subtract,multiply,divide};
  int choice, num1, num2;
  printf("Enter your choice 0 - 3:\n");
  scanf("%d",&choice);
  if (choice < 0 || choice > 3) {
    printf("Invalid choice\n");
    return 1;
}
  printf("Enter num1 and num2:\n");
  scanf("%d%d",&num1,&num2);
  int res = fptr[choice](num1,num2);
printf("Result : %d",res);
  
    return 0;
}
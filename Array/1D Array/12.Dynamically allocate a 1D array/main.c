/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

int main(void) {

	int size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);

	int *ptr = (int *)malloc( size*sizeof(int) );
	if(ptr == NULL) {
		printf("Memory allocation failed\n");
	} else {
		printf("Enter the elements:\n");
		for(int i=0; i<size; i++) {
			scanf("%d",(ptr+i) );
		}
		printf("Entered elements are:\n");
		for(int i=0; i<size; i++) {
			printf("%d\n",*(ptr+i) );
		}
	}
 free(ptr);
 ptr = NULL;
}

#include <stdio.h>
#include<stdlib.h>

int main()
{
	int row,col;
	printf("Enter the row size : \n");
	scanf("%d",&row);
	printf("Enter the coloumn size : \n");
	scanf("%d",&col);
	int **ptr = (int **)malloc( row * sizeof(int *) );
	if(ptr == NULL) {
		exit(1);
	} else {
		for(int i = 0; i<row; i++) {
			ptr[i] = (int *)malloc(col * sizeof(int) );
		}
		for(int i = 0; i<row; i++) {
			for(int j = 0; j<col; j++) {
				scanf("%d",&ptr[i][j]);
			}
		}
		printf("Array elements are :\n");
		for(int i = 0; i<row; i++) {
			for(int j = 0; j<col; j++) {
				printf("%d",ptr[i][j]);
				printf("\t");
			}
			printf("\n");
		}

	}
	for(int i = 0; i<row; i++) {
		free(ptr[i]);
	}
	free(ptr);  // Free the array of row pointers
	return 0;
}
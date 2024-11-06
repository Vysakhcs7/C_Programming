#include <stdio.h>
#define ROWS 3
#define COLS 3

// #define SUM
// #define MATRIX_ADDITION
// #define SIZE_OF_ARRAY
//#define DYNAMIC_1D_ARRAY
#define DYNAMIC_2D_ARRAY
// Program to find sum of all elements of the matrix.
#ifdef SUM
void find_sum(int (*)[3]);

int main()
{
	int arr[ROWS][COLS] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}};

	find_sum(arr);
	return 0;
}

void find_sum(int (*ptr)[3])
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += (*(*(ptr + i) + j));
		}
	}
	printf("Sum is : %d", sum);
}
//---------------------------------------------------------------
#elif defined(MATRIX_ADDITION)
// Program to add two matrices
void matrix_sum(int (*)[3], int (*)[3]);

int main()
{

	int a[3][3], b[3][3];

	printf("Enter elements of first matrix (3x3):\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);

	printf("Enter elements of second matrix (3x3):\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &b[i][j]);

	matrix_sum(a, b);
	return 0;
}

void matrix_sum(int (*ptr_arr1)[3], int (*ptr_arr2)[3])
{
	int sum[3][3];
	// Adding the two matrices
	printf("Sum of the two matrices:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i][j] = (*(*(ptr_arr1 + i) + j) + *(*(ptr_arr2 + i) + j));
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
}
//---------------------------------------------------------------
#elif defined(SIZE_OF_ARRAY)
// Program to find the size of a 2D array
void size_of_matrix(int (*)[3][3], int *ptr_arr2);

int main()
{
	int array[3][3] = {{1, 2, 3},
					   {4, 5, 6},
					   {7, 8, 9}};
	size_of_matrix(&array, &array[0][0]);
	return 0;
}

void size_of_matrix(int (*ptr_arr)[3][3], int *ptr_arr2)
{

	int size_of_one_element = ((char *)(ptr_arr2 + 1) - (char *)(ptr_arr2));
	int size_of_array = ((char *)(ptr_arr + 1) - (char *)(ptr_arr));

	printf("Size of one element : %d\n", size_of_one_element);
	printf("Size of the matrix is : %d\n", size_of_array);
	printf("Number of elements is : %d\n", (size_of_array / size_of_one_element));
}
//---------------------------------------------------------------
#elif defined(DYNAMIC_1D_ARRAY)
#include <stdlib.h>

int main()
{
	int row_size;
	printf("Enter the number of rows:");
	scanf("%d", &row_size);

	int *ptr_row_index = (int *)malloc(sizeof(int) * row_size);
	if (ptr_row_index == NULL)
	{
		printf("Insufficient memory\n");
	}
	else
	{
		for (int i = 0; i < row_size; i++)
		{
			*(ptr_row_index+i) = i;
			printf("%d ",*(ptr_row_index+i));
		}
		printf("\n");
		
	}
    free(ptr_row_index);
	return 0;
}
//---------------------------------------------------------------
#elif defined (DYNAMIC_2D_ARRAY)
#include <stdlib.h>

int main()
{
	int col_size;
	printf("Enter the number of rows:");
	scanf("%d", &col_size);

	int *ptr_row_index = (int *)malloc(sizeof(int) * col_size);
	if (ptr_row_index == NULL)
	{
		printf("Insufficient memory\n");
	}
	else
	{
		for (int i = 0; i < row_size; i++)
		{
			*(ptr_row_index+i) = i;
			printf("%d ",*(ptr_row_index+i));
		}
		printf("\n");
		
	}
    free(ptr_row_index);
	return 0;
}
#endif
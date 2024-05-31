/*
4 - Find the largest element in each 1D array
Sample execution:
Test case 1 :
Enter the row size : 3
Enter the column size : 3
Enter the elements :
10    11    12
6     8     7
20    13    14
Largest element in [0] row is : 12
Largest element in [1] row is : 8
Largest element in [2] row is : 20

Test case 2 :
Enter the row size : 2
Enter the column size : 2
30    40
60    50
Largest element in [0] row is : 40
Largest element in [1] row is : 60
*/
#include <stdio.h>
int main()
{
    int rows, cols, sum;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int largest_arr[rows];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    int biggest;

    for (int i = 0; i < rows; i++)
    {
        biggest = matrix[i][0];
        for (int j = 1; j < cols; j++)
        {
            if (biggest > matrix[i][j])
            {
                biggest = biggest;
            }
            else
            {
                biggest = matrix[i][j];
            }
        }
        largest_arr[i] = biggest;
        printf("Largest element in [%d] row is :%d\n",i,largest_arr[i]);
    }
    return 0;
}
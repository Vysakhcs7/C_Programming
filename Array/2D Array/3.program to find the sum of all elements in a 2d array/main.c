/*
3 - Write a program to find the sum of all elements in a 2d array
Sample execution:
Test case 1 :

Enter the row size : 3
Enter the column size : 3
Enter the elements :
array[0][0] = 4
array[0][1] = 5
array[0][2] = 6
array[1][0] = 7
array[1][1] = 8
array[1][2] = 9
array[2][0] = 2
array[2][1] = 3
array[2][2] = 4

Expected output :
The sum of the matrix is : 48

Test case 2 :
Enter the row size : 2
Enter the column size : 2
Enter the elements :
array[0][0] = 3
array[0][1] = 4
array[1][0] = 5
array[1][1] = 6

Expected output :
The sum of the matrix is : 18
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

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }
    printf("The sum of the matrix is : %d\n", sum);
    return 0;
}
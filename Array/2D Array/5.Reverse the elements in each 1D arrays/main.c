/*5 - Write a program to reverse the elements in each 1D arrays
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
Before reverse :
4    5    6
7    8    9
2    4    5
After reverse :
6    5    4
9    8    7
5    4    2

Test case 2 :
Enter the row size : 2
Enter the column size : 2
Enter the elements :
array[0][0] = 4
array[0][1] = 3
array[1][0] = 6
array[1][1] = 5

Expected output :
Before reverse:
4    3
6    5
After reverse:
3    4
5    6
*/
#include <stdio.h>
int main(void)
{
    int row_size, col_size, k;
    printf("Enter the row size :\n");
    scanf("%d", &row_size);
    printf("Enter the column size : \n");
    scanf("%d", &col_size);
    int array[row_size][col_size];

    printf("Enter the elements : \n");
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("Before reverse : \n");
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int reverse_array[row_size][col_size];

    for (int i = 0; i < row_size; i++)
    {
        k = col_size - 1;
        for (int j = 0; j < col_size - 1; j++)
        {
            int temp = array[i][j];
            array[i][j] = array[i][k];
            array[i][k] = temp;
            k--;
        }
    }
    printf("After reverse : \n");
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
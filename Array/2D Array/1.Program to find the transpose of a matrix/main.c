/*
Sample Execution :

Test case 1 :
Enter the size of the row : 3
Enter the size of the column : 3
Enter the elements :
1    2    3
1    2    3
1    2    3
After transpose :
1    1    1
2    2    2
3    3    3
*/

#include <stdio.h>
int main(void)
{
    int row_size,coloumn_size;
    printf("Enter the size of the row : \n");
    scanf("%d", &row_size);
    printf("Enter the size of the column :\n");
     scanf("%d", &coloumn_size);
     int arr[row_size][coloumn_size];
     int transpos_arr[row_size][coloumn_size];
     printf("Enter the elements :\n");
    for (int i = 0; i < row_size; i++)
    {
                for(int j = 0; j<coloumn_size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("After transpose :\n");
       for (int i = 0; i < row_size; i++)
    {
        for(int j = 0; j<coloumn_size; j++)
        {
            transpos_arr[i][j] = arr[j][i];
            printf("%d",transpos_arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
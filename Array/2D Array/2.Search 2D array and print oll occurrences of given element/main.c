/*
2 - Write a c progam to search an element in the two dimensional array,
if present then print  all occurrences of the its "index position"
otherwise output "not found".

Sample Execution :
Test case 1 :
{1    2    3},
{4    5    5},
{5    6    5}

Enter the search element : 5
Element found in the following positions:
(1 , 1)
(1 , 2)
(2 , 0)
(2 , 2)

Test case 2 :
{10    20    30},
{40    50    50},
{50    60    50}
Enter the search element : 30
Element found in the following positions:
(0 , 2)
*/

#include <stdio.h>
int main()
{
    int rows, cols, search_element;
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
printf("Enter the search element :\n");
scanf("%d",&search_element);

   for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(search_element == matrix[i][j])
            {
                printf("(%d , %d)",i,j);
            }
        }
    }

return 0;
}
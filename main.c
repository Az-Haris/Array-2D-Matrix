#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int row, col, i, j;

    printf("Enter Row Limit : ");
    scanf("%d,", &row);
    printf("Enter Column Limit : ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter The Matrix Values :");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Your Matrix Output is : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }





    getch();
    return 0;
}

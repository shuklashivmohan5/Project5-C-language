#include <stdio.h>

int main()
{
    int rows, columns, i, j, rowSum = 0, columnSum = 0, rowNum, columnNum;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &columns);

    int array[rows][columns];

    printf("Enter array's elements: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &rowNum);
    
    printf("Elements of row %d: ", rowNum);
    for (j = 0; j < columns; j++)
    {
        printf("%d ", array[rowNum][j]);
        rowSum += array[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    printf("Enter column number: ");
    scanf("%d", &columnNum);
    
    printf("Elements of column %d: ", columnNum);
    for (i = 0; i < rows; i++)
    {
        printf("%d ", array[i][columnNum]);
        columnSum += array[i][columnNum];
    }
    printf("\nThe sum of column %d: %d\n", columnNum, columnSum);

    return 0;
}

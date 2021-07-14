//calculate the sum m X n matrics
#include<stdio.h>
void main()
{
    int rows1, rows2, cols1, cols2, row_sum, col_sum,i,j,k;
    int mat1[10][10], mat2[10][10],sum[20][20];
    printf("\n Enter the number of rows in first matrix: ");
    scanf("%d",&rows1);

    printf("\n Enter the number of column in first matrix: ");
    scanf("%d",&cols1);

    printf("\n Enter the number of rows in second matrix: ");
    scanf("%d",&rows2);

    printf("\n Enter the number of column in second matrix: ");
    scanf("%d",&cols2);

    if(rows1 != rows2 || cols1 != cols2)
    {
        printf("\n the number of rows and columns of both the matrices must be equal");
    }

    row_sum = rows1;
    col_sum = cols1;

    printf("\n Enter the elements of the first matrix: ");
    printf("\n*********************************************\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols1;j++)
           scanf("%d",&mat1[i][j]);
    }

    printf("\n Enter the elements of the second matrix: ");
    printf("\n*********************************************\n");
    for(i=0;i<rows2;i++)
    {
        printf("\n");
        for(j=0;j<cols2;j++)
           scanf("%d",&mat2[i][j]);
    }

    printf("\n The element of resultant matrics are:");
    printf("\n************************************************\n");

    for(i=0;i<row_sum;i++)
    {
        printf("\n");

        for(j=0;j<col_sum;j++)
        sum[i][j] = mat1[i][j] + mat2[i][j];

    }

    for(i=0;i<row_sum;i++)
    {
        printf("\n");
        for(j=0;j<col_sum;j++)
           printf("\t %d", sum[i][j]);
    }
}

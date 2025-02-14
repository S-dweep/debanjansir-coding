#include<stdio.h>
void main()
{
    int i,j,k,r,c,h;
    printf("Enter no. of row, column and height for matrix:\n");
    scanf("%d %d %d",&r,&c,&h);
    int mat[h][r][c];
    printf("Enter array elements:\n");
    for(k=0;k<h;k++)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&mat[k][i][j]);
            }
        }
    }
    printf("The matrix:\n");
    for(k=0;k<h;k++)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d",mat[k][i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}

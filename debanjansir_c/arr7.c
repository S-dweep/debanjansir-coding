#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter no. of row and column for matrix:\n");
    scanf("%d %d",&r,&c);
    int mat[r][c];
    printf("Enter array elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Transpose of the matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}

#include<stdio.h>
void main()
{
    int i,j,r,c,flag;
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
    for(i=0;i<r;i++)
    {
        for(j=0;j<i;j++)
        {
            flag=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=flag;
        }
    }
    printf("Transpose of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

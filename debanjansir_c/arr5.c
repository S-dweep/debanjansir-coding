#include<stdio.h>
void main()
{
    int i,j,r1,r2,c1,c2;
    printf("Enter row and column for matrix 1:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for matrix 2:\n");
    scanf("%d %d",&r2,&c2);
    int mat1[r1][c1],mat2[r2][c2];
    if(r1==r2 && c1==c2)
    {
        printf("Enter elements of matrix 1:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("Enter elements of matrix 2:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("Sum matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",mat1[i][j]+mat2[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Not possible.");
    return 0;
}


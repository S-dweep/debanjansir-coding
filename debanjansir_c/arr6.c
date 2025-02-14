#include<stdio.h>
void main()
{
    int i,j,r,c,flag=0;
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
        for(j=0;j<c;j++)
        {
            if(i==j && mat[i][j]!=1)
            {
                flag=-1;
                break;
            }
            else if(i!=j && mat[i][j]!=0)
            {
                flag=-1;
                break;
            }
        }
    }
    if(flag==0)
    printf("Identity matrix.");
    else
    printf("Not an identity matrix.");
    return 0;
}

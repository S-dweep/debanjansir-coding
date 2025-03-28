#include<stdio.h>
void main()
{
    int row,col,i,j,rsum=0,csum=0,totsum=0;
    printf("Enter the order of matrix: \n");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("Enter matrix elements: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%3d",&arr[i][j]);
        }
    }
    printf("Input matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            rsum+=arr[i][j];
        }
        printf("Sum of row %d: %d\n",(i+1),rsum);
        rsum=0;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            csum+=arr[j][i];
        }
        printf("Sum of col %d: %d\n",(i+1),csum);
        csum=0;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            totsum+=arr[i][j];
        }
    }
    printf("Sum of matrix: %d\n",totsum);
    return 0;
}

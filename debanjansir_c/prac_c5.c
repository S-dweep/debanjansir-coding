#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter matrix elements:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%3d\t",mat[i][j]);
        }
        printf("\n");
    }
    int ld=0;
    for (i = 0; i < n; i++)
    {
        ld += mat[i][i];
    }
    int rd=0;
    for (i = 0; i < n; i++)
    {
        j=n-1-i;
        if(i!=j)
            rd += mat[i][j];
    }
    printf("Sum of diagonal elements: %d", ld+rd);

    return 0;
}

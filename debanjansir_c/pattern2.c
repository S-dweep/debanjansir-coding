#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter no. of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
void main()
{
    int n,i,j;
    int ch;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ch=65;
        for(j=n;j>i;j--)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        ch=65;
        for(j=0;j<=i;j++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
}

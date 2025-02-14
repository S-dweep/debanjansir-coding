#include<stdio.h>
void main()
{
    int n,i,j;
    scanf("%d",&n);
    int a,b,c;
    for(i=0; i<n; i++)
    {
        a=0;
        b=1;
        for(j=0; j<=i; j++)
        {
            printf("%d",a);
            c=a+b;
            a=b;
            b=c;
        }
    }
    printf("\n");
}


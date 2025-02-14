#include<stdio.h>
void main()
{
    int m,n,i,fact=1;
    printf("Enter base: ");
    scanf("%d",&m);
    printf("Enter power: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=m;
    }
    printf("%d^%d: %d",m,n,fact);
    return 0;
}

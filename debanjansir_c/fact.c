#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("Enter any integer: ");
    scanf("%d",&n);
    if(n<0)
    printf("Factorial not possible.");
    else
    {
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Factorial: %d",fact);
    }
    return 0;
}

#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        break;
    }
    if(i>n/2 && n!=1)
    printf("Prime no.");
    else
    printf("Not a prime no.");
    return 0;
}

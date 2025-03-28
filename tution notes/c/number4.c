#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    printf("Perfect no.");
    else
    printf("Not a perfect no.");
    return 0;
}

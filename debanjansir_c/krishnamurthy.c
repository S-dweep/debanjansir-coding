#include<stdio.h>
void main()
{
    int n,i,num1,sum=0,fact=1;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    num1=n;
    while(num1>0)
    {
        for(i=1;i<=(num1%10);i++)
        {
            fact*=i;
        }
        sum+=fact;
        num1=num1/10;
        fact=1;
    }
    if(sum==n)
    printf("Krishnamurthy no.");
    else
    printf("Not a krishnamurthy no.");
    return 0;
}

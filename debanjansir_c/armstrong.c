#include<stdio.h>
void main()
{
    int n,num,sum,c,p,i,r;
    printf("Enter any positive integer: ");
    scanf("%d",&n);
    num=n;
    c=0;
    while(num!=0)
    {
        num=num/10;
        c++;
    }
    num=n;
    sum=0;
    while(num!=0)
    {
        r=num%10;
        p=1;
        for(i=1;i<=c;i++)
        {
            p*=r;
        }
        sum+=p;
        num=num/10;
    }
    if(sum==n)
    printf("Armstrong no.");
    else
    printf("Not an armstrong no.");
    return 0;
}

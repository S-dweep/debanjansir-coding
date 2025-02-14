#include<stdio.h>
void main()
{
    int n,a,b;
    scanf("%d",&n);
    int num=n;
    a=num%10;
    while(n!=0)
    {
        b=n%10;
        n/=10;
    }
    printf("%d",a+b);
    return 0;
}

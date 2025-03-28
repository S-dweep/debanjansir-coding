#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        break;
    }
    if((i>n/2)&&(n!=1))
    return 1;
}
void main()
{
    int num,check;
    printf("Enter your number: ");
    scanf("%d",&num);
    check=prime(num);
    if(check==1)
    printf("Prime no.");
    else
    printf("Not a prime no.");
}

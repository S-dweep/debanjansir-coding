#include<stdio.h>
void main()
{
    int n,rev=0,num=0;
    printf("Enter any integer: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=(rev*10)+((n%10)+1);
        n=n/10;
    }
    while(rev!=0)
    {
        num=(num*10)+(rev%10);
        rev=rev/10;
    }
    printf("The number after increment of every digit by 1: %d",num);
    return 0;
}

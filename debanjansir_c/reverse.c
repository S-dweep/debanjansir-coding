#include<stdio.h>
void main()
{
    int n,i,rev=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    while(n>0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    printf("Reverse: %d",rev);
    return 0;
}

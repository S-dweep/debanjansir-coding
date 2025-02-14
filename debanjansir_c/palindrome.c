#include<stdio.h>
void main()
{
    int n,i,rev=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    int num=n;
    while(n>0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(num==rev)
    printf("Palindrome no.");
    else
    printf("Not a palindrome no.");
    return 0;
}

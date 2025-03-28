#include<stdio.h>
int sum(int n)
{
    int s=0;
    while(n>0)
    {
        s=s+(n%10);
        n=n/10;
    }
    return s;
}
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Sum of digits: %d",sum(num));
    return 0;
}

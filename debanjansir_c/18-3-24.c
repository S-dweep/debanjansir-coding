#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter value on n: ");
    scanf("%d",&n);
    int t1=0,t2=1,t3;
    for(i=3;i<=n;i++)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    printf("%dth fibonacci term: %d",n,t3);
    return 0;
}
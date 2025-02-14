#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    int t1=0,t2=1,t3;
    printf("Fibonacci series:\t");
    if(n>=1)
    {
    printf("%d\t",t1);
    }
    if(n>=2)
    {
    printf("%d\t",t2);
    }
    for(i=3;i<=n;i++)
    {
        t3=t1+t2;
        printf("%d\t",t3);
        t1=t2;
        t2=t3;
    }
    return 0;
}

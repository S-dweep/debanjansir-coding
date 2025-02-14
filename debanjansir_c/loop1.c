#include<stdio.h>
int main()
{
    int n,sum=0,pro=1;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        pro*=i;
    }
    printf("Sum of n natural no.s: %d\n",sum);
    printf("Product of n natural no.s: %d",pro);
    return 0;
}

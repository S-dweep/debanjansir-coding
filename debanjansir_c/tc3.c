#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,rev=0;
        scanf("%d",&n);
        int num=n;
        while(n!=0)
        {
            rev=(rev*10)+(n%10);
            n/=10;
        }
        if(num==rev)
        printf("1\n");
        else
        printf("0\n");
    }
    return 0;
}

#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,fact=1;
        scanf("%d",&n);
        if(n==0)
            printf("1\n");
        else if(n<0)
            printf("Not possible\n");
        else
        {
            for(int i=1; i<=n; i++)
            {
                fact*=i;
            }
            printf("%d\n",fact);
        }
    }
    return 0;
}

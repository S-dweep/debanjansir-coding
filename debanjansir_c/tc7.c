#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int t1=0,t2=1,t3,n,i;
        scanf("%d",&n);
        printf("%d %d ",t1,t2);
        for(i=3;i<=n;i++)
        {
            t3=t1+t2;
            printf("%d ",t3);
            t1=t2;
            t2=t3;
        }
        printf("\n");
    }
}

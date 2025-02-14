#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            break;
        }
        if((i>n/2)&&(n!=1))
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}

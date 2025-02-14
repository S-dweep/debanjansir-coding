#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1,n2,i,j,c=0;
        scanf("%d %d",&n1,&n2);
        for(i=n1;i<=n2;i++)
        {
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                    break;
            }
            if(j>i/2 && i!=1)
                c++;
        }
        printf("%d\n",c);
    }
}

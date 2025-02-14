#include<stdio.h>
void main()
{
    int n,i,j,s=0;
    printf("Enter limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
                break;
        }
        if(j>i/2 && i!=1)
            s+=i;
    }
    printf("Prime sum: %d",s);
    return 0;
}

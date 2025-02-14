#include<stdio.h>
void main()
{
    int m,n,i,j,c=0;
    scanf("%d %d",&m,&n);
    printf("\n");
    for(i=m;i<=n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            break;
        }
        if((j>i/2)&&(i!=1))
        {
            printf("%d\n",i);
            c++;
        }
    }
    printf("\n%d",c);
}

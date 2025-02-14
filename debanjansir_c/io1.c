#include<stdio.h>
void main()
{
    int i,m,n,num,rev,c=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        rev=0;
        num=i;
        while(num!=0)
        {
            rev=(rev*10)+(num%10);
            num/=10;
        }
        if(rev==i)
        {
            printf("%d\n",i);
            c++;
        }
    }
    printf("%d",c);
    return 0;
}

#include<stdio.h>
void main()
{
    int n,nn=0,i=1,c=0;
    scanf("%d",&n);
    while(c!=n)
    {
        int num=i,rev=0;
        while(num!=0)
        {
            rev=(rev*10)+(num%10);
            num/=10;
        }
        if(rev==i)
        {
            c++;
            nn=i;
        }
        i=i+1;
    }
    printf("%d",nn);
}

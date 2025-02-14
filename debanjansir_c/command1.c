#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    if(argc<2)
        printf("Insufficient argument");
    else
    {
        int n,i,rem,count=0,num1,p=1,sum=0;
        n=atoi(argv[1]);
        num1=n;
        while(num1!=0)
        {
            count++;
            num1=num1/10;
        }
        num1=n;
        while(num1!=0)
        {
            p=1;
            rem=num1%10;
            for(i=1;i<=count;i++)
            {
                p*=rem;
            }
            sum+=p;
            num1=num1/10;
        }
        if(sum==n)
            printf("Armstrong no");
        else
            printf("Not armstrong no");
    }
}

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    if(argc<2)
        printf("Insufficient arguments");
    else
    {
        int n,i,j,c;
        n=atoi(argv[1]);
        c=0;
        for(i=1;c<n;i++)
        {
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                    break;
            }
            if(j>i/2 && i!=1)
            {
                c++;
                if(c==n)
                    printf("%d prime no: %d",n,i);
            }
        }
    }
}

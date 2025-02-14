#include<stdio.h>
void main()
{
    int n,i,j,c=0;
    printf("Enter the position:\n");
    scanf("%d",&n);
    for(i=1;i!=0;i++)
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
            {
                printf("The %dth prime no. is: %d",n,i);
                break;
            }
        }
    }
    return 0;
}

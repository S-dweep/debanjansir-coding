#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,r,num,c,d=0,sum;
    printf("Enter your position: ");
    scanf("%d",&n);
    for(i=1;i!=0;i++)
    {
    num=i;
    c=0;
    while(num!=0)
    {
        r=num%10;
        c++;
        num/=10;
    }
    num=i;
    sum=0;
    while(num!=0)
    {
        sum+=pow((num%10),c);
        num/=10;
    }
    if(sum==i)
    {
        d++;
        if(d==n)
        {
            printf("The %dth armstrong no. is: %d",n,i);
            break;
        }
    }
    }
    return 0;
}

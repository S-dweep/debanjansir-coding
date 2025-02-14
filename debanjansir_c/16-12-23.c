#include<stdio.h>
void main()
{
    int n,b,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        if((b%3)!=0)
        {
            c=1;
            break;
        }
        n/=10;
    }
    if(c==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}

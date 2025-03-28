#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum of first %d natural nos. is: %d",n,sum);
    return 0;
}

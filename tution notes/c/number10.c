#include<stdio.h>
int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}
void main()
{
    int num;
    printf("Enter the limit: ");
    scanf("%d",&num);
    printf("The sum of first %d natural nos. is: %d",num,sum(num));
    return 0;
}

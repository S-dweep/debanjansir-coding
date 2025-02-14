#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int num[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=2;j<=num[i]/2;j++)
        {
            if(num[i]%j==0)
            break;
        }
        if((j>num[i]/2)&&(num[i]!=1))
        printf("%d is prime.\n",num[i]);
        else
        printf("%d is not prime.\n",num[i]);
    }
    return 0;
}

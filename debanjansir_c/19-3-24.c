#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int num[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int smallest=num[0], secondsmallest=num[0];
    for(i=1;i<n;i++)
    {
        if(num[i]<smallest)
        {
            secondsmallest=smallest;
            smallest=num[i];
        }
        else if((num[i]<secondsmallest)&&(num[i]>smallest))
        {
            secondsmallest=num[i];
        }
    }
    printf("The 2nd smallest number is: %d",secondsmallest);
    return 0;
}

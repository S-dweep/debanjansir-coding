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
    int largest=num[0], secondlargest=num[0];
    for(i=1;i<n;i++)
    {
        if(num[i]>largest)
        {
            secondlargest=largest;
            largest=num[i];
        }
        else if((num[i]>secondlargest)&&(num[i]<largest))
        {
            secondlargest=num[i];
        }
    }
    printf("The 2nd largest number is: %d",secondlargest);
    return 0;
}

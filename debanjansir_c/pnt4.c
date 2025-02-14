#include<stdio.h>
void main()
{
    int n,i,*p;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int num[n];
    p=&num;
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    int largest=p[0], secondlargest=p[0];
    for(i=1;i<n;i++)
    {
        if(p[i]>largest)
        {
            secondlargest=largest;
            largest=p[i];
        }
        else if((p[i]>secondlargest)&&(p[i]<largest))
        {
            secondlargest=p[i];
        }
    }
    printf("The 2nd largest number is: %d",secondlargest);
    return 0;
}


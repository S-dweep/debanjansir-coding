#include<stdio.h>
void linear_search(int *arr,int n,int value)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            printf("Value is present at index %d",i);
            break;
        }
    }
    if(i==n)
    printf("Value not found.");
}
void main()
{
    int arr[100],i,n,value;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&value);
    linear_search(arr,n,value);
    return 0;
}

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
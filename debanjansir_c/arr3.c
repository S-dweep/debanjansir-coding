#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        arr[i]=arr[i]^arr[n-1-i];
        arr[n-1-i]=arr[i]^arr[n-1-i];
        arr[i]=arr[i]^arr[n-1-i];
    }
    printf("Reverse array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

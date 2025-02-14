#include<stdio.h>
void sorting(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
    }
}
void searching(int *arr,int beg,int end,int value)
{
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(arr[mid]==value)
            return mid;
        else if(arr[mid]>value)
            beg=mid+1;
        else
            end=mid-1;
    }
    return -1;
}
void main()
{
    int n,value;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&value);
    sorting(arr,n);
    int r=searching(arr,0,n-1,value);
    if(r==-1)
        printf("Element not found");
    else
        printf("Element found at position %d",r);
}

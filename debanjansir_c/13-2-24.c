#include<stdio.h>
int smallest(int *arr,int k,int n)
{
    int small=arr[k],pos=k,j;
    for(j=k+1;j<n;j++)
    {
        if(small>arr[j])
        {
            small=arr[j];
            pos=j;
        }
    }
    return pos;
}
void selectionsort(int *arr,int n)
{
    int k,pos;
    for(k=0;k<n;k++)
    {
        pos=smallest(arr,k,n);
        if(arr[pos]<arr[k])
        {
            arr[k]=arr[k]^arr[pos];
            arr[pos]=arr[k]^arr[pos];
            arr[k]=arr[k]^arr[pos];
        }
    }
}
int interpolationsearch(int *arr,int beg,int end,int item)
{
    int pos=-1;
    while(beg<=end)
    {
        int mid=beg+(end-beg)*((item-arr[beg])/(arr[end]-arr[beg]));
        if(arr[mid]==item)
        {
            pos=mid;
            return pos;
        }
        else if(arr[mid]>item)
            end=mid-1;
        else
            beg=mid+1;
    }
    if(pos=-1)
    return -1;
}
int main()
{
    int n,i,item;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter element to be searched: ");
    scanf("%d",&item);
    int result=interpolationsearch(arr,0,n-1,item);
    if(result==-1)
    printf("Element not present in array");
    else
    printf("Element present at index %d",result);
}
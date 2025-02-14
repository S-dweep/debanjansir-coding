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
void main()
{
    int n,i;
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
    return 0;
}


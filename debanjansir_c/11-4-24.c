#include<stdio.h>
void merge(int *arr, int beg, int mid, int end)
{
    int i=beg,j=mid+1,index=beg,temp[end],k;
    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp[index]=arr[i];
            i++;
        }
        else
        {
            temp[index]=arr[j];
            j++;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=end)
        {
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index]=arr[i];
            i++;
            index++;
        }
    }
    for(k=beg;k<index;k++)
    arr[k]=temp[k];
}
void mergesort(int *arr, int beg, int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergesort(arr,beg,mid);
        mergesort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}
void main()
{
    int arr
}
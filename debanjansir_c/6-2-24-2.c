#include<stdio.h>
int searching(int *arr,int n,int value)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
            return i;
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
    int r=searching(arr,n,value);
    if(r==-1)
        printf("Element not found");
    else
        printf("Element found at position %d",r);
}

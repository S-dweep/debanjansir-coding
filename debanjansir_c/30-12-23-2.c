#include<stdio.h>
int binarysearch(int *arr,int beg,int end,int item)
{
   if(end>=beg)
   {
      int mid=(beg+end)/2;
      if(arr[mid]==item)
         return mid;
      if(arr[mid]>item)
         return binarysearch(arr,beg,mid-1,item);
      else
         return binarysearch(arr,mid+1,end,item);
   }
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
    printf("Enter element to be searched: ");
    scanf("%d",&item);
    int find=binarysearch(arr,0,n-1,item);
    if(find==-1)
    {
        printf("Element not found in the array ");
    }
   else
    {
        printf("Element found at index: %d",find);
    }
   return 0;
}

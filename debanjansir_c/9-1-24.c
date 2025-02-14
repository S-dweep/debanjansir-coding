#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l=arr[0],s=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>l)
            l=arr[i];
        if(arr[i]<s)
            s=arr[i];
    }
    printf("Difference between largest and smallest elements: %d",l-s);
    return 0;
}

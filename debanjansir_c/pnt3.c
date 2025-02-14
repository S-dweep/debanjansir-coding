#include<stdio.h>
void main()
{
    int i,n,*p;
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    int arr[n];
    p=&arr;
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Original array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
    for(i=0;i<n/2;i++)
    {
        p[i]=p[i]^p[n-1-i];
        p[n-1-i]=p[i]^p[n-1-i];
        p[i]=p[i]^p[n-1-i];
    }
    printf("Reverse array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}

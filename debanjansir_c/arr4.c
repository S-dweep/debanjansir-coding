#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter size:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=i-1,j=0;j<i;j++,i--)
    {
        a[i]=a[i]^a[j];
        a[j]=a[i]^a[j];
        a[i]=a[i]^a[j];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

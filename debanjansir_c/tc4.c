#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int num[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
        int l=num[0],sl=num[0];
        for(i=1;i<n;i++)
        {
            if(num[i]>l)
            {
                sl=l;
                l=num[i];
            }
            else if((num[i]>sl)&&(num[i]<l))
            {
                sl=num[i];
            }
        }
        printf("%d\n",sl);
    }
    return 0;
}

#include<stdio.h>
void main()
{
    int n1,n2,i,p=0;
    printf("Enter two positive integers:\n");
    scanf("%d %d",&n1,&n2);
    for(i=0;i<n2;i++)
    {
        p+=n1;
    }
    printf("Product of %d and %d: %d",n1,n2,p);
    return 0;
}

#include<stdio.h>
int multiply(int a,int b)
{
    if(b==0)
    return 0;
    else
    {
        return a+multiply(a,b-1);
    }
}
void main()
{
    int a,b;
    printf("Enter two +ve integers:\n");
    scanf("%d %d",&a,&b);
    printf("Result: %d",multiply(a,b));
}

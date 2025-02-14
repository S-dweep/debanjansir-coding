#include<stdio.h>
void conversion1(int n)
{
    int b;
    if(n==0)
        return;
    else
    {
        b=n%2;
        conversion1(n/2);
        printf("%d",b);
    }
}
void conversion2(int n)
{
    int o;
    if(n==0)
        return;
    else
    {
        o=n%8;
        conversion2(n/8);
        printf("%d",o);
    }
}
void main()
{
    int n;
    printf("Enter decimal number: ");
    scanf("%d",&n);
    printf("Binary equivalent:\n");
    conversion1(n);
    printf("\nOctal equivalent:\n");
    conversion2(n);
    return 0;
}

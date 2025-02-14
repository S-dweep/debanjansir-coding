#include<stdio.h>
long int decitohexa(int deci)
{
    int rem=0;
    if(deci==0)
    return 0;
    else
    {
        rem=deci%16;
        decitohexa(deci/16);
        if(rem>=10)
        printf("%c",rem+55);
        else
        printf("%d",rem);
    }
}
void main()
{
    int deci;
    printf("Enter +ve decimal integer: ");
    scanf("%d",&deci);
    decitohexa(deci);
    return 0;
}


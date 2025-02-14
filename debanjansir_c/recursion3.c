#include<stdio.h>
long int decitooctal(int deci)
{
    if(deci==0)
    return 0;
    else
    return (deci%8+10*decitooctal(deci/8));
}
void main()
{
    int deci;
    printf("Enter +ve decimal integer: ");
    scanf("%d",&deci);
    printf("Octal equivalent: %d",decitooctal(deci));
    return 0;
}


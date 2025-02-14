#include<stdio.h>
long int decitobin(int deci)
{
    if(deci==0)
    return 0;
    else
    return (deci%2+10*decitobin(deci/2));
}
void main()
{
    int deci;
    printf("Enter +ve decimal integer: ");
    scanf("%d",&deci);
    printf("Binary equivalent: %d",decitobin(deci));
    return 0;
}

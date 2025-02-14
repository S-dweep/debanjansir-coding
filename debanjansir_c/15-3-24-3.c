#include<stdio.h>
void decitoocta(int deci)
{
    if(deci==0)
    return;
    int rem = deci % 8;
    decitoocta(deci / 8);
    printf("%d", rem);
}
int main()
{
    int deci,i;
    printf("Enter a decimal number: ");
    scanf("%d",&deci);
    printf("Octal equivalent: ");
    if(deci==0)
    printf("0");
    else
    decitoocta(deci);
    printf("\n");
    return 0;
}
#include<stdio.h>
void main()
{
    long bin1,bin2;
    printf("Enter first binary number: ");
    scanf("%ld",&bin1);
    printf("Enter second binary number: ");
    scanf("%ld",&bin2);
    int i=0,rem=0; int sum[1000];
    while(bin1!=0 || bin2!=0)
    {
        sum[i++]=(bin1%10 + bin2%10 + rem)%2;
        rem=(bin1%10 + bin2%10 + rem)/2;
        bin1/=10;
        bin2/=10;
    }
    if(rem!=0)
    {
        sum[i++]=rem;
    }
    --i;
    printf("The binary sum is: ");
    while(i>=0)
    {
        printf("%d",sum[i--]);
    }
    return 0;
}

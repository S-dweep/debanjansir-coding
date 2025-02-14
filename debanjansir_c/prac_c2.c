#include<stdio.h>
void gcd(int a,int b)
{
    int i,gcd=0;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;}}
        printf("GCD= %d",gcd);
}
void lcm(int a,int b)
{
    int i,gcd=0,lcm=0;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
        lcm=(a*b)/gcd;}
        printf("LCM= %d",lcm);
}
void main()
{
    int a,b,ch;
    printf("Enter two positive integers:\n");
    scanf("%d %d",&a,&b);
    while(1)
    {
        printf("\nPress 1 to find gcd\n");
        printf("\nPress 2 to find lcm\n");
        printf("\nPress 3 to exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            gcd(a,b);
            break;
        case 2:
            lcm(a,b);
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid Input");
        }
    }
    return 0;
}

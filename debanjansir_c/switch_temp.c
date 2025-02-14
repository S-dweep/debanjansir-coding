#include<stdio.h>
int main()
{
    float c,f,k,r;
    int ch;
    printf("Enter temperature in centigrade: ");
    scanf("%f",&c);
    printf("Press 1 to get equivalent fahrenheit, 2 to get equivalent kelvin, 3 to get equivalent romer. Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        f=1.8*c+32.0;
        printf("%.2f is the equivalent fahrenheit.",f);
        break;
        case 2:
        k=c+273.15;
        printf("%.2f is the equivalent kelvin.",k);
        break;
        case 3:
        r=c*0.8;
        printf("%.2f is the equivalent romer.",r);
        break;
        default:
        printf("Invalid Input.");
    }
    return 0;
}

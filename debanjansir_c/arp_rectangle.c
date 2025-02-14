#include<stdio.h>
int main()
{
    float l,b,p,a;
    printf("Enter length of rectangle: \n");
    scanf("%f",&l);
    printf("Enter breadth of rectangle: \n");
    scanf("%f",&b);
    p = 2 * (l+b);
    a = l*b;
    printf("Perimeter of rectangle: %.2f\n",p);
    printf("Area of rectangle: %.2f",a);
    return 0;
}

#include<stdio.h>
int main()
{
    float r;
    printf("Enter radius of circle: \n");
    scanf("%f",&r);
    float p,a;
    p = 2 * 3.14 * r;
    a = 3.14 * r * r;
    printf("\nPerimeter of circle: %.2f\n",p);
    printf("Area of circle: %.2f",a);
    return 0;
}

#include<stdio.h>
int main()
{
    float r,p,a;
    char ch;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    printf("\nPress 'p' to find perimeter or 'a' to find area.\n");
    printf("Enter your choice: ");
    scanf("%s",&ch);
    switch(ch)
    {
        case 'p':
        p = 2 * 3.14 * r;
        printf("Perimeter of circle: %.2f",p);
        break;
        case 'a':
        a = 3.14 * r * r;
        printf("Area of circle: %.2f",a);
        break;
        default:
        printf("Invalid Input.");
        break;
    }
    return 0;
}

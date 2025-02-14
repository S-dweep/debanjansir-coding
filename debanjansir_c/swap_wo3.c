#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Before swapping: \n");
    printf("a: %d",a);
    printf("\nb: %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping: \n");
    printf("a: %d",a);
    printf("\nb: %d",b);
    return 0;
}

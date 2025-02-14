#include<stdio.h>
int main()
{
    int a,b,*p1,*p2;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    printf("Before swapping:\n");
    printf("a: %d",*p1);
    printf("\nb: %d\n",*p2);
    *p1=*p1^*p2;
    *p2=*p1^*p2;
    *p1=*p1^*p2;
    printf("After swapping: \n");
    printf("a: %d",*p1);
    printf("\nb: %d",*p2);
    return 0;
}

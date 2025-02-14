#include<stdio.h>
void main()
{
    int a=5,*p;
    p=&a;
    printf("%d\n",a);
    printf("%u\n",&a);
    printf("%u\n",p);
    printf("%d\n",*p);
    p++;
    printf("%u\n",p);

    int x=10,y=4,*p1,*p2;
    p1=&x;
    p2=&y;
    printf("%d %d %d %d %d",*p1+*p2,*p1-*p2,(*p1)*(*p2),*p1/ *p2,*p1%*p2);


}

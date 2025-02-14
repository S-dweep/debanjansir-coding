#include<stdio.h>
int main()
{
    int n1,n2,n3,max;
    printf("Enter 3 integers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("Largest no: %d",max);
    return 0;
}

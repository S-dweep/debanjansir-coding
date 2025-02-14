#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum = 0.0;
    for(int i=1;i<=2*i-1;i++)
    {
        sum+=(float)(i*i)/(float)(i*i*i);
    }
    printf("%f",sum);
}
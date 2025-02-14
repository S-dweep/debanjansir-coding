#include<stdio.h>
int palindrome(int num)
{
    int nn=num;
    int rev=0;
    while(num>0)
    {
        int b=num%10;
        rev=(rev*10)+b;
        num/=10;
    }
    if(rev==nn)
    return 1;
    else 
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int num=1, count=0;
    while(num>0)
    {
        if(palindrome(num)==1)
        count++;
        if(count==n)
        {
            printf("%d",num);
            break;
        }
        num++;
    }
}

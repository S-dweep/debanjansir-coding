#include<stdio.h>
int prime(int num)
{
    int i,f=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    if(i>num/2)
    return 1;
    else
    return 0;
}
int main()
{
    int n,i,primesum=0,nonprimesum=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int num=arr[i];
        if(prime(num)==1)
        primesum+=num;
        else
        nonprimesum+=num;
    }
    if(primesum>nonprimesum)
    printf("Difference of primesum and nonprimesum is: %d",(primesum-nonprimesum));
    else
    printf("Difference of primesum and nonprimesum is: %d",(nonprimesum-primesum));
    return 0;
}
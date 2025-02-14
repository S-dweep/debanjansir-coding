#include<stdio.h>
void main()
{
    int n,ch,i,rev,num;
    printf("Enter an integer: ");
    scanf("%d",&n);
    while(1)
    {
        printf("\nPress 1 to identify the no is odd or even\n");
        printf("\nPress 2 to identify the no is prime or not\n");
        printf("\nPress 3 to identify the no is palindrome or not\n");
        printf("\nPress 4 to identify the no is positive or negative\n");
        printf("\nPress 5 to exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(n%2==0)
                printf("%d is even.",n);
            else
                printf("%d is odd.",n);
            break;
        case 2:
            for(i=2; i<=n/2; i++)
            {
                if(n%i==0)
                    break;
            }
            if((i>n/2)&&(n!=1))
                printf("Prime no.");
            else
                printf("Not a prime no.");
            break;
        case 3:
            num=n;
            rev=0;
            while(num>0)
            {
                rev=(rev*10)+(num%10);
                num=num/10;
            }
            if(n==rev)
                printf("Palindrome no.");
            else
                printf("Not a palindrome no.");
            break;
        case 4:
            if(n>0)
                printf("Positive no");
            else
                printf("Negative no");
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input");
        }
    }
    return 0;
}

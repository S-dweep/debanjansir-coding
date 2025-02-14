#include<stdio.h>
int main()
{
    int n,ch;
    printf("Enter a +ve integer: ");
    scanf("%d",&n);
    printf("Press 1 to calculate square of number, 2 to calculate cube of number, 3 to identify if no. is odd or even. Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Square: %d",n*n);
        break;
        case 2:
        printf("Cube: %d",n*n*n);
        break;
        case 3:
        if(n%2==0)
        printf("%d is even.",n);
        else
        printf("%d is odd.",n);
        break;
        default:
        printf("Invalid Input.");
    }
    return 0;
}


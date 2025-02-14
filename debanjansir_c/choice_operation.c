#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter two integers: \n");
    scanf("%d\t%d",&a,&b);
    printf("\nPress 1 to add, 2 to subtract, 3 to multiply and 4 to divide.\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    if(ch==1)
    printf("\nAddition of two integers: %d",(a+b));
    else if(ch==2)
    printf("\nSubtraction of two integers: %d",(a-b));
    else if(ch==3)
    printf("\nMultiplication of two integers: %d",(a*b));
    else if(ch==4)
    printf("\nDivision of two integers: %d",(a/b));
    else
    printf("\nInvalid Input.");
    return 0;
}

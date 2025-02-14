#include<stdio.h>
void main()
{
    char str[1000];
    int c;
    printf("Enter any string: ");
    gets(str);
    while(str[c]!='\0')
    {
        c++;
    }
    printf("Length of string: %d",c);
    return 0;
}

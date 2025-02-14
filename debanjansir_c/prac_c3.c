#include<stdio.h>
void reverse(char *s)
{
    if(*s)
    {
        reverse(s+1);
        printf("%c",*s);
    }
}
void main()
{
    char s[1000];
    printf("Enter string: ");
    gets(s);
    reverse(s);
}

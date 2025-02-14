#include<stdio.h>
void main()
{
    char s[1000];
    int i,j;
    printf("Enter string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        s[j]=s[j]^s[i-1-j];
        s[i-1-j]=s[j]^s[i-1-j];
        s[j]=s[j]^s[i-1-j];
    }
    printf("Reverse string: ");
    puts(s);
    return 0;
}


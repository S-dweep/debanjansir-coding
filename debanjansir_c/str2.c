#include<stdio.h>
void main()
{
    char s1[1000],s2[1000];
    int i;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter 2nd string: ");
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    puts(s1);
    puts(s2);
    return 0;
}

#include<stdio.h>
int palindrome(char s[],int j,int i)
{
    if(j>=i)
    {
        return 1;
    }
    if(s[j]!=s[i])
    {
        return 0;
    }
    return palindrome(s,j+1,i-1);
}
void main()
{
    char s[1000];
    int i,pal;
    printf("Enter string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    pal=palindrome(s,0,i-1);
    if(pal==1)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}

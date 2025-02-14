#include<stdio.h>
void rev_int(int n)
{
    int rev;
    while(n>0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    printf("Reverse integer:\n%d",rev);
}
void rev_str(char *s)
{
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        s[j]=s[j]^s[i-1-j];
        s[i-1-j]=s[j]^s[i-1-j];
        s[j]=s[j]^s[i-1-j];
    }
    printf("\nReverse string:\n%s",s);
}
void main()
{
    int n;
    char s[1000];
    printf("Enter integer: ");
    scanf("%d",&n);
    printf("Enter string: ");
    scanf("%s",s);
    rev_int(n);
    rev_str(s);
    return 0;
}

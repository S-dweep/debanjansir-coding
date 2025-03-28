#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[100];
    int i;
    printf("Enter the sentence: \n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
        else
        {
            s[i]=tolower(s[i]);
        }
    }
    printf("Case changed sentence: \n%s",s);
    return 0;
}

#include<stdio.h>
void main()
{
    char s[100];
    int i,v=0,c=0,sp=0;
    printf("Enter the sentence: \n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            v++;
        }
        else if(s[i]=='\t'||s[i]=='\0'||s[i]==' ')
        {
            sp++;
        }
        else
        {
            c++;
        }
    }
    printf("No. of vowels: %d\n",v);
    printf("No. of consonants: %d",c);
    return 0;
}

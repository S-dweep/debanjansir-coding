#include<stdio.h>
void main()
{
    char s1[1000],s2[1000],s3[1000];
    int i,j;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter 2nd string: ");
    gets(s2);
    for(i=0,j=0;s1[i]!='\0';i++,j++)
    {
        s3[j]=s1[i];
    }
    s3[j++]=' ';
    for(i=0;s2[i]!='\0';i++,j++)
    {
        s3[j]=s2[i];
    }
    s3[j]='\0';
    puts(s3);
    puts(s2);
    return 0;
}

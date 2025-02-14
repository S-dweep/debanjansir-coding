#include<stdio.h>
void main()
{
    char s1[1000],s2[1000];
    int i,j,c=0;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter 2nd string: ");
    gets(s2);
    for(i=0,j=0;s1[i]!='\0',s2[i]!='\0';i++,j++)
    {
        if(s1[i]!=s2[j])
        {
            c=1;
            break;
        }
    }
    if(c!=1 && i==j)
    printf("Similar");
    else
    printf("Not similar");
    return 0;
}


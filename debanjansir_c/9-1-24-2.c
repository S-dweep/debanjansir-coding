#include<stdio.h>
void main()
{
    char s[1000],s1[1000];
    int i,j,k,p,m,c=0;
    printf("Enter any string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        c++;
    }
    for(j=0;j<c;j++)
    {
        p=0;
        for(k=0;k<c;k++)
        {
            if(s[j]==s1[k])
                p=1;
        }
        s1[j++]=s[j];
        if(p!=1)
        {
            m=0;
            for(k=0;k<c;k++)
            {
                if(s[j]==s[k])
                    m++;
            }
            printf("%s = %d",s[j],m);
        }
    }
}

#include<stdio.h>
int compare(char *s1,char *s2)
{
    int i,j,f=0;
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++);
    if(i!=j)
    return 0;
    else
    {
        for(i=0;s1[i]!='\0',s2[i]!='\0';i++)
        {
            if(s1[i]!=s2[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        return 0;
        else 
        return 1;
    }
}
int main()
{
    char s1[1000],s2[1000];
    printf("Enter 2 strings:\n");
    scanf("%s %s",s1,s2);
    if(compare(s1,s2))
    printf("Same");
    else
    printf("Different");
    return 0;
}
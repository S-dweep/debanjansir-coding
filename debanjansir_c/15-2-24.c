#include<stdio.h>
void main()
{
    char s[1000];
    int i,j,n;
    printf("Enter a string: ");
    scanf("%s",s);
    printf("Enter position: ");
    scanf("%d",&n);
    for(i=0;s[i]!='\0';i++)
    {
        if(i==n-1)
        {
            for(j=i+1;s[j]!='\0';j++)
            s[j-1]=s[j];
        }
    }
    s[i-1]='\0';
    printf("After deletion:\n");
    printf("%s",s);
}
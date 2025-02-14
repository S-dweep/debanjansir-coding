#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,c=0;
        char s[1000];
        scanf("%s",s);
        for(i=0; s[i]!='\0'; i++);
            for(j=0; j<i; j++)
            {
                if(s[j]!=s[i-1-j])
                {
                    c=1;
                    break;
                }
            }
        if(c!=1)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}

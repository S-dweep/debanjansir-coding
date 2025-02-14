#include<stdio.h>
void main()
{
    int i,j,index=0;
    char str[1000];
    printf("Enter your name: ");
    scanf("&s",str);
    for(i=0;str[i]!='\0';i++);
    for(j=0;j<i-1;j++)
    {
        if(str[j]==' ')
        {
            index=j;
            break;
        }
    }
    for(j=0;j<index;j++)
    {
        str[j]=str[j]^str[index+1];
        str[index+1]=str[j]^str[index+1];
        str[j]=str[j]^str[index+1];
        index++;
    }
    str[i]='\0';
    printf("Reversed name: %s",str);
    return 0;
}
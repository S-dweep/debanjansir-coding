#include<stdio.h>
int main() {
    char str[100],s;
    int i,j;
    gets(str);
    scanf("%c",&s);
    for(i=0,j=0;str[i]!='\0';i++)
    {
        if(str[i]!=s){
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    puts(str);
    return 0;
}
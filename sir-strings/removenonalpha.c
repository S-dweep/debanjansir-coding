#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]==' ')){
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    printf("%s",str);
    return 0;
}
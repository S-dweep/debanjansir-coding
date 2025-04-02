#include<limits.h>
#include<stdio.h>
int isPalindrome(char* word, int start, int end){
    while(start<end){
        if(word[start]!=word[end]){
            return 0;
        }
        start++;
        end--;
    } return 1;
}
int main(){
    char str[100];
    int small=INT_MAX, large=INT_MIN;
    int smallIndexstart=0, smallIndexend=0, largeIndexstart=0, largeIndexend=0;
    gets(str);
    int i,j;
    int start=0, end=0;
    for(i=0;str[i]!='\0';i++);
    for(j=0;str[j]!='\0';j++){
        if(str[j]==' ' || str[j+1]=='\0'){
            if(j==i-1) end=j;
            else end=j-1;
            if(isPalindrome(str,start,end)){
                int len=end-start+1;
                if(len>large){
                    large=len;
                    largeIndexstart=start;
                    largeIndexend=end;
                }
                if(len<small){
                    small=len;
                    smallIndexstart=start;
                    smallIndexend=end;
                }
            }
            start=j+1;
        }
    }
    printf("smallest: ");
    for(int k=smallIndexstart;k<=smallIndexend;k++){
        printf("%c",str[k]);
    }
    printf("\n");
    printf("largest: ");
    for(int k=largeIndexstart;k<=largeIndexend;k++){
        printf("%c",str[k]);
    }
    return 0;
}
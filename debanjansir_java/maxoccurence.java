#include <stdio.h>
int main() {
    // Write C code here
    char s[100];
    gets(s);
    int freq[256]={0};
    for(int i=0;s[i]!=0;i++){
        if(freq[(int)s[i]]!=0) freq[(int)s[i]]++;
    }
    int maxi=0;
    for(int i=0;i<256;i++){
        if(freq[i]>maxi) maxi=freq[i];
    }
    for(int i=0;s[i]!=0;i++){
        if(freq[(int)s[i]]==maxi) printf("%c",s[i]);
    }
    return 0;
}
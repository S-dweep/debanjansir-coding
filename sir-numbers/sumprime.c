// sum of prime no.s till n
#include<stdio.h>
int isPrime(int num){
    int i;
    if(num==1) return 0;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}
#include<stdio.h>
void mergeandsort(int a[], int n, int b[], int m, int result[]){
    int k=0;
    for(int i=0;i<n;i++){
        result[k++] = a[i];
    }
    for(int i=0;i<m;i++){
        result[k++] = b[i];
    }
    for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            if(result[i]<result[j]){
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
}
int main(){
    int n, m;
    printf("Size of 1st array\n");
    scanf("%d",&n);
    int a[n];
    printf("Elements of 1st array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Size of 2nd array\n");
    scanf("%d",&m);
    int b[m];
    printf("Elements of 2nd array\n");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int result[n+m];
    mergeandsort(a, n, b, m, result);
    for(int i=0;i<n+m;i++){
        printf("%d ",result[i]);
    }
    return 0;
}
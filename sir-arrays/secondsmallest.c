#include<stdio.h>
int main(){
    int n;
    printf("Enter size\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first = arr[0], second = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<first){
            second = first;
            first = arr[i];
        }else if(arr[i]<second && arr[i]>first){
            second = arr[i];
        }
    }
    printf("%d",second);
    return 0;
}
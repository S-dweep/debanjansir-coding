#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Elements in the array in ascending order\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Input the value to be inserted\n");
    scanf("%d",&x);
    printf("The existing array list is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    if(arr[n-1]<x) arr[n]=x;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            for(int j=n;j>i;j--){
                arr[j] = arr[j-1];
            }
            arr[i] = x;
            break;
        }
    }
    printf("\nAfter insert the list is:\n");
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
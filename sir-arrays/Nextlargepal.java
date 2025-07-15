import java.util.*;
class Nextlargepal{
    public static int[] nextPal(int arr[], int n){
        int start=0, end=n-1;
        while(start<=end){
            if(arr[start]!=arr[end]) arr[end]=arr[start];
            start++;
            end--;
        } return arr;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int res[]=nextPal(arr,n);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        sc.close();
    }
}
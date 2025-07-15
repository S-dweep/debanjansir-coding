import java.util.*;
class Missingno{
    public static int missing(int arr[], int n){
        int sum1=((n+1)*(n+2))/2;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum2+=arr[i];
        }
        return (sum1-sum2);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println(missing(arr, n));
        sc.close();
    }
}
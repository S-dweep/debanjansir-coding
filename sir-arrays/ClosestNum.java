import java.util.*;
class ClosestNum{
    public static int closest(int arr[], int num){
        int res=arr[0];
        int mini=Math.abs(arr[0]-num);
        for(int n:arr){
            int diff=Math.abs(n-num);
            if(diff<mini || (diff==mini && n<res)){
                res=n;
                mini=diff;
            }
        } return res;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int num=sc.nextInt();
        System.out.println(closest(arr,num));
        sc.close();
    }
}
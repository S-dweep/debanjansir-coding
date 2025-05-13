import java.util.*;
class Bs{
    public static void binarySearch(int arr[], int low, int high, int target){
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                ans=mid;
                break;
            } 
            else if(arr[mid]<target) low=mid+1;
            else high=mid-1;
        }
        if(ans==-1) System.out.println("item not found");
        else System.out.println("item found at index "+ans);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int target=sc.nextInt();
        binarySearch(arr,0,n-1,target);
    }
}
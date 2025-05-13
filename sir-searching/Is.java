import java.util.*;
class Is{
    public static void binarySearch(int arr[], int low, int high, int target){
        while(low<=high){
            int mid=low+(high-low)*((target-arr[low])/(arr[high]-arr[low]));
            if(arr[mid]==target){
                System.out.println("item found at index "+mid);
                break;
            } 
            else if(arr[mid]<target) low=mid+1;
            else high=mid-1;
        }
        if(low>high) System.out.println("item not found"); 
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
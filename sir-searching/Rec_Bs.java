import java.util.*;
class Rec_Bs{
    public static int binarySearch(int arr[], int low, int high, int target){
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return -1; 
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int target=sc.nextInt();
        int pos=binarySearch(arr,0,n-1,target);
        if(pos==-1) System.out.println("item not found");
        else System.out.println("item found at index "+pos);
    }
}
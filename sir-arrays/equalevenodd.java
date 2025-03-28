// minimum indices to equalize even and odd indices
// Time complexity: O(n)
// Space complexity: O(1)

import java.util.*;
class equalevenodd {
    public static int countindices(int arr[], int n) {
        if(n==1) return 1;
        if(n==2) return 0;
        int evenSum=0, oddSum=0;
        int count=0;
        for(int i=0; i<n; i++){
            if(i%2==0) evenSum+=arr[i];
            else oddSum+=arr[i];
        }
        int currentEven=0, currentOdd=0;
        for(int i=0;i<n;i++){
            if(i%2==0) evenSum-=arr[i];
            else oddSum-=arr[i];
            if(currentEven+oddSum==currentOdd+evenSum) count++;
            if(i%2==0) currentEven+=arr[i];
            else currentOdd+=arr[i];
        } return count;     
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();  
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(countindices(arr, n));
        sc.close();
    }
}
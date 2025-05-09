import java.util.*;

class MyExp101 extends Exception {
    public String msg() {
        return "User defined exception: odd palindrome sum";
    }
}

class PalSumEvenexp { 
    public static void PalindromeSum(int arr[], int n) throws MyExp101 {
        int num, sum=0;
        for(int i=0;i<n;i++){
            int rev=0;
            num=arr[i];
            while(num>0){
                rev=(rev*10)+(num%10);
                num/=10;
            }
            if(rev==arr[i]) sum+=arr[i];
        }
        if(sum%2==0) System.out.println("even palindrome sum");
        else throw new MyExp101();
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        try {
            PalindromeSum(arr,n);
        } catch (MyExp101 e) {
            System.out.println(e.msg());
        } finally {
            sc.close();
        }
    }
}
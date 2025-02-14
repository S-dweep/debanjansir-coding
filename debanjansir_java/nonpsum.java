import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=2;j<=arr[i]/2;j++){
                if(arr[i]%j==0){
                    sum+=(arr[i]*arr[i]);
                    break;
                }
            }
        }
        System.out.println(sum);
    }
}
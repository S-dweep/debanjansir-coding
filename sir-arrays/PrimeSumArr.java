import java.util.*;
class PrimeSumArr
{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        int sum=0,i,j;
        for(i=0;i<n;i++){
            arr[i]=sc.nextInt();
            sum+=arr[i];
        }
        for(j=2;j<=sum/2;j++){
            if(sum%j==0) break;
        }
        if(sum!=1 && j>sum/2) System.out.println("yes");
        else System.out.println("no");
    }
}
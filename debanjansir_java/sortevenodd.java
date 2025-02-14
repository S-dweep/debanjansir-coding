import java.util.*;
class A {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        int result[]=new int[n];
        int ind=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0) result[ind++]=arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0) result[ind++]=arr[i];
        }
        for(int i=0;i<n;i++){
            System.out.print(result[i]+" ");
        }
    }
}
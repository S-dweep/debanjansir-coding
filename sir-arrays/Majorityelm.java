import java.util.*;
class Majorityelm{
    public static int majority(int arr[], int n){
        int c1=0, c2=0;
        int elm=0;
        for(int i:arr){
            if(c1==0){
                c1++;
                elm=i;
            } else if(elm==i) c1++;
            else c1--;
        }
        for(int i:arr){
            if(i==elm) c2++;
        }
        if(c2>(n/2)) return elm;
        return -1;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        sc.close();
        System.out.println(majority(arr,n));
    }
}
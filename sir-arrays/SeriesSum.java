import java.util.*;
class SeriesSum{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int t1=1, t2=2;
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=t1;
            int next=t1+t2;
            t1=t2;
            t2=next;
        }
        System.out.println(sum);
        sc.close();
    }
}

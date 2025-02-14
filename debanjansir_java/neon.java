import java.util.*;
class A {
    int n;
    A(int n){
        this.n=n;
    }
    void neon(){
        int num=n*n;
        int sum=0;
        while(num>0){
            sum+=(num%10);
            num/=10;
        }
        if(sum==n) System.out.println("Neon number");
        else System.out.println("Not a Neon number");
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        A ob=new A(n);
        ob.neon();
    }
}
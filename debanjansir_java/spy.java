import java.util.*;
class A {
    int n;
    A(int n){
        this.n=n;
    }
    void spy(){
        int sum=0, pro=1;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            pro*=digit;
            n/=10;
        } if(sum==pro) System.out.println("Spy number");
        else System.out.println("Not a Spy number");
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        A ob=new A(n);
        ob.spy();
    }
}
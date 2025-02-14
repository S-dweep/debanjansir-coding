import java.util.*;
class A {
    int n;
    A(int n){
        this.n=n;
    }
    int automorphic(){
        int num=n*n;
        int num1=n;
        while(num1>0){
            if((num%10) != (num1%10)){
                return 0;
            }
            num/=10;
            num1/=10;
        } return 1;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        A ob=new A(n);
        int res=ob.automorphic();
        if(res!=0) System.out.println("Automorphic number");
        else System.out.println("Not an Automorphic number");
    }
}
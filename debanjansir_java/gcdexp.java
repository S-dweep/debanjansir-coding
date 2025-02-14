import java.util.*;
class Exp extends Exception{
    public String toString(){
        return "UserDefinedException: GCD is 1";
    }
}
class A{
    void gcd(int a, int b)throws Exp{
        int gcd=0;
        for(int i=1;i<=a && i<=b;i++){
            if(a%i==0 && b%i==0) gcd=i;
        }
        if(gcd!=1) System.out.println("GCD: "+gcd);
        else throw new Exp();
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        A ob=new A();
        try{
            ob.gcd(a,b);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
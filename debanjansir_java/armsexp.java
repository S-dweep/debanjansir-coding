import java.util.*;
class A{
    void arms(int n)throws ArithmeticException{
        int num=n,c=0;
        while(num>0){
            num/=10;
            c++;
        }
        num=n;
	int sum=0;
        while(num>0){
            int d=num%10;
            sum+=Math.pow(d,c);
            num/=10;
        }
        if(sum==n) System.out.println("Yes");
        else throw new ArithmeticException();
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        A ob=new A();
        try{
            ob.arms(n);
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
    }
}
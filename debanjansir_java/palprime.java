import java.util.*;
class A {
        int prime(int n){
        int c=2,count=0,i;
        while(count<n){
        for(i=2;i<=c/2;i++){
            if(c%i==0) break;
        }
        if(i>c/2) count++;
        if(count==n) return c;
        c++;
        } return 0;
        }
        int palindrome(int n){
        int num=1,count=0;
        while(count<n){
        int num1=num, rev=0;
        while(num1>0){
            rev=(rev*10)+(num1%10);
            num1/=10;
        }
        if(rev==num) count++;
        if(count==n) return num;
        num++;
        } return 0;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
	    A ob=new A();
        int pr=ob.prime(n);
        int pl=ob.palindrome(n);
        System.out.println(pr+pl);
    }
}
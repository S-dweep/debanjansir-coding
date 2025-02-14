import java.util.*;
class A{
    public int n;
    A(int n){
        this.n=n;
    }
    public int fibo(){
        int count=2,t1=0,t2=1,t3=0;
        if(n==1) return t1;
        if(n==2) return t2;
        while(count!=n){
            t3=t1+t2;
            t1=t2;
            t2=t3;
            count++;
        }
        return t3;
    }
    public int prime(){
        int count=0,num=2,i,nn=0;
        while(count!=n){
            for(i=2;i<=num/2;i++){
                if(num%i==0) break;
            } if(i>num/2){
                count++;
                nn=num;
            }
            num++;
        } return nn;
    }
    public int pal(){
        int count=0,num=1,nnn=0;
        while(count!=n){
            int rev=0,nn=num;
            while(nn>0){
                rev=(rev*10)+(nn%10);
                nn/=10;
            } if(rev==num){
                count++;
                nnn=num;
            } num++;
        } return nnn;
    }
}
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        A ob=new A(n);
        int res1=ob.fibo();
        int res2=ob.prime();
        int res3=ob.pal();
        System.out.println(res1);
        System.out.println(res2);
        System.out.println(res3);
    }
}
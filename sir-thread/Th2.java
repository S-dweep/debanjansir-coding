import java.util.*;
class Prime extends Thread{
    int n;
    Prime(int n){
        this.n=n;
    }
    public boolean isPrime(int num){
        int i;
        for(i=2;i<=(num/2);i++){
            if(num%i==0) return false;
        } return true;
    }
    public void run(){
        try {
            int count=0, num=2, i=1;
            while(count<n){
                if(isPrime(num)){
                    System.out.println("Prime number "+i+" "+num);
                    count++;
                    i++;
                }
                num++;
                Thread.sleep(1500);
            }
        } catch (Exception e) {}
        System.out.println("Exit from Prime thread");
    }
}
class Palindrome extends Thread{
    int n;
    Palindrome(int n){
        this.n=n;
    }
    public boolean isPalindrome(int num){
        int nn=num, rev=0;
        while(nn>0){
            rev=(rev*10)+(nn%10);
            nn/=10;
        }
        if(rev==num) return true;
        else return false;
    }
    public void run(){
        try {
            int count=0, num=1, i=1;
            while(count<n){
                if(isPalindrome(num)){
                    System.out.println("Palindrome number "+i+" "+num);
                    count++;
                    i++;
                }
                num++;
                Thread.sleep(1500);
            }
        } catch (Exception e) {}
        System.out.println("Exit from Palindrome thread");
    }
}
class Square1 extends Thread{
    int n;
    Square1(int n){
        this.n=n;
    }
    public void run() {
        try {
            for (int i = 1; i <= n; i++) {
                System.out.println("Square of " + i + " is " + i * i);
                Thread.sleep(1500);
            }
        } catch (Exception e) {}
        System.out.println("Exit from Square thread");
    }
}
class Th2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        Prime t1 = new Prime(n);
        Palindrome t2 = new Palindrome(n);
        Square1 t3 = new Square1(n);
        t1.start();
        t2.start();
        t3.start();
    }
}

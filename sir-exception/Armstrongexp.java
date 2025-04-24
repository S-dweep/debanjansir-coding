import java.util.*;

class MyExp1 extends Exception {
    public String msg() {
        return "User defined exception: not armstrong";
    }
}

class Armstrongexp { 
    public static void isArmstrong(int n) throws MyExp1 {
        int num,c=0,sum=0;
        num=n;
        while(num>0){
            c++;
            num/=10;
        }
        num=n;
        while(num>0){
            sum+=(Math.pow(num%10,c));
            num/=10;
        }
        if(sum==n) System.out.println("Armstrong");
        else throw new MyExp1();
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        try {
            isArmstrong(n);
        } catch (MyExp1 e) {
            System.out.println(e.msg());
        } finally {
            sc.close();
        }
    }
}
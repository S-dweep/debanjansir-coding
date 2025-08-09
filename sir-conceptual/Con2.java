import java.util.*;
class MyExp extends Exception {
    public String toString(){
        return "User Defined Exception: Negative input";
    }
}
class Con2{
    int a;
    int b;
    Con2(int a, int b) {
        this.a = a;
        this.b = b;
    }
    public int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    public void result() throws MyExp {
        if(a<=0 || b<=0) throw new MyExp();
        int gcd = findGCD(a, b);
        int lcm = (a * b) / gcd;
        System.out.println("GCD: " + gcd);
        System.out.println("LCM: " + lcm);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        Con2 ob = new Con2(a, b);
        try {
            ob.result();
        } catch(MyExp e) {
            System.out.println(e);
        }
    }
}
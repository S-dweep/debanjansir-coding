import java.util.*;

class MyExp001 extends Exception {
    public String msg() {
        return "User defined exception: not prime";
    }
}

class Primexp { 
    public static void isPrime(int n) throws MyExp001 {
        if (n <= 1) {
            throw new MyExp001();
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                throw new MyExp001();
            }
        }
        System.out.println("Prime");
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        try {
            isPrime(n);
        } catch (MyExp001 e) {
            System.out.println(e.msg());
        } finally {
            sc.close();
        }
    }
}
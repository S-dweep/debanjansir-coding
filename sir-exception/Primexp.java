import java.util.*;

class MyExp extends Exception {
    public String msg() {
        return "User defined exception: not prime";
    }
}

class Primexp { 
    public static void isPrime(int n) throws MyExp {
        if (n <= 1) {
            throw new MyExp();
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                throw new MyExp();
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
        } catch (MyExp e) {
            System.out.println(e.msg());
        } finally {
            sc.close();
        }
    }
}
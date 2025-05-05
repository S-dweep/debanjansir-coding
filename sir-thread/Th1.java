import java.util.*;
class Square extends Thread {
    int n;
    Square(int n){
        this.n=n;
    }
    public void run() {
        try {
            for (int i = 1; i <= n; i++) {
                System.out.println("Square of " + i + " is: " + i * i);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            System.out.println("Square thread interrupted");
        }
        System.out.println("Exit from Square thread");
    }
}
class Cube extends Thread {
    int n;
    Cube(int n){
        this.n=n;
    }
    public void run() {
        try {
            for (int j = 1; j <= n; j++) {
                System.out.println("Cube of " + j + " is: " + j * j * j);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            System.out.println("Cube thread interrupted");
        }
        System.out.println("Exit from Cube thread");
    }
}
class Factorial extends Thread {
    int n;
    Factorial(int n){
        this.n=n;
    }
    public void run() {
        try {
            for (int k = 1; k <= n; k++) {
                int fact = 1;
                for (int p = 1; p <= k; p++) {
                    fact *= p;
                }
                System.out.println("Factorial of " + k + " is: " + fact);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            System.out.println("Factorial thread interrupted");
        }
        System.out.println("Exit from Factorial thread");
    }
}
class Th1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        Square t1 = new Square(n);
        Cube t2 = new Cube(n);
        Factorial t3 = new Factorial(n);
        t1.start();
        t2.start();
        t3.start();
    }
}
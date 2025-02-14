class armstrong {
    void isArm(int num) {
        int c = 0, n, a;
        n = num;
        while (n > 0) {
            c++;
            n = n / 10;
        }
        n = num;
        int s = 0;
        while (n > 0) {
            a = n % 10;
            s += Math.pow(a , c);
            n = n / 10;
        }
        if (s == num)
            System.out.println(num + " is Armstrong number");
        else
            System.out.println(num + " is not Armstrong number");
    }
}
class A {
    public static void main(String args[]) {
        armstrong arm = new armstrong();
        arm.isArm(Integer.parseInt(args[0]));
    }
}

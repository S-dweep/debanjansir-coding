class A {
    int a;

    void initialize(int a) {
        this.a = a;
    }

    void pal() {
        int n = a, rev = 0;
        while (n > 0) {
            int digit = n % 10;
            rev = (rev * 10) + digit;
            n = n / 10;
        }
        if (rev == a)
            System.out.println(a + " is Palindrome number");
        else
            System.out.println(a + " is not Palindrome number");
    }



public static void main(String args[])
{
A ob = new A();
ob.initialize(Integer.parseInt(args[0]));
ob.pal();
}
}
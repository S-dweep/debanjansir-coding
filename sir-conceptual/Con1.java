public class Con1{
    int num;
    // Constructor overloading
    Con1(){
        System.out.println("Default constructor "+num);
    }
    Con1(int num){
        this.num=num;
        System.out.println("Parameterized constructor "+num);
    }
    Con1(Con1 obj)
    {
        System.out.println("Copy constructor "+obj.num);
    }

    // Instance method overloading
    public void sum(int a, int b){
        System.out.println("Sum "+(a+b));
    }
    public void sum(float a, float b){
        System.out.println("Sum "+(a+b));
    }
    // Static method overloading
    public static void sum(int a, float b){
        System.out.println("Sum "+(a+b));
    }
    public static void sum(double a, double b){
        System.out.println("Sum "+(a+b));
    }
    public static void main(String[] args) {
        Con1 obj1 = new Con1();
        Con1 obj2 = new Con1(10);
        Con1 obj3 = new Con1(obj2);

        obj1.sum(10, 20);
        obj1.sum(2.5f, 4.5f);

        Con1.sum(10, 4.5f);
        Con1.sum(5, 8.3);
    }
}
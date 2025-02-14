class A {
    static int a=0;
    static{
        System.out.println("Static block..");
        a=1;
    }
    static void s(){
        System.out.println("Static method..a = "+a);
    }
    void ns(){
        a++;
        System.out.println("Non-Static method..a = "+a);
    }
    static class Sns{
    void display(){
    	System.out.println("Nested class..");
    }
    }
    public static void main(String[] args) {
        A.s();
        A ob=new A();
        ob.ns();
	A.Sns ob1=new A.Sns();
	ob1.display();
    }
}
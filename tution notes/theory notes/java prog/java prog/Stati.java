class A
{
static int a;// static or class variable
int x;//instance variable
static //static block
{
a=24;
System.out.println("Inside static block a="+a);
}
A()// non argument or default constructor
{
x=7;
System.out.println("constructor of class A x="+x);
}
static void msg() // static method
{
System.out.println(" Inside Static method");
}
public static void main(String args[])
{
A m=new A();
A n=new A();
System.out.println("From class A a="+A.a);
A.msg();
}
}
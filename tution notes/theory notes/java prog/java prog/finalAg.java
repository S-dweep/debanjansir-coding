final class A
{
final int a=5;
final void msg()
{
System.out.println("final method of final class");
}
}
class Demo
{
public static void main(String args[])
{
A x=new A();
System.out.println(x.a);
x.msg();
}
}
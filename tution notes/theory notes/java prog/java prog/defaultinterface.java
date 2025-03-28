interface A
{
void msg1();
default void msg2()
{
System.out.println("Default method of interface");
}
}
class B implements A
{
public void msg1()
{
System.out.println("overriding method of interface");
}
}
class Demo
{
public static void main(String args[])
{
B b=new B();
b.msg1();
b.msg2();
}
}

class A
{
static int a;
static void setter(int x)
{
a=x;
}
static void getter()
{
System.out.println(a);
}
public static void main(String args[])
{
A x=new A();
A y=new A();
x.setter(10);
System.out.println(a);
y.getter();
}
}
package pack;
class A
{
void add(int a,int b)
{
System.out.println(a+b);
}
}
class B
{
void mul(int a,int b)
{
System.out.println(a*b);
}
}
class Demo
{
public static void main(String args[])
{
A x=new A();
B y=new B();
x.add(8,7);
y.mul(5,6);
}
}
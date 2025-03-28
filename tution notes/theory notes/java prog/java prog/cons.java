class A
{
int a;//instance variable
A()
{
a=9;
System.out.println("non argument constructor");
}
A(int a)
{
this.a=a;
System.out.println("argument constructor");
}
void m()//instance method
{
System.out.println(a);
}
public static void main(String args[])
{
A x=new A();
A y=new A(12);
x.m();
y.m();
}
}


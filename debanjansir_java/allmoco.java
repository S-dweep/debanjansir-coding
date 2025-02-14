class A
{
int n;
A()
{
this.n=n;
System.out.println(n);
}
A(int n)
{
this.n=n;
System.out.println(n);
}
int sum(int a, int b)
{
return(a+b);
}
double sum(double a, double b)
{
return(a+b);
}
void display()
{
System.out.println("Hi");
}
}
class B extends A
{
void display()
{
System.out.println("Hello");
}
}
class Demo
{
public static void main(String args[])
{
A ob1=new A();
A ob2=new A(5);
System.out.println(ob1.sum(4,3));
System.out.println(ob1.sum(2.5,3.5));
B ob3=new B();
ob3.display();
}
}
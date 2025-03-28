class Staticex
{
static int a,b; //static variable
static //static block no 1
{
a=10;
System.out.println("static block 1 a= "+a);
}
static //static block no 2
{
b=5;
System.out.println("static block 2 b="+b);
}
Staticex()//non argument constructor
{
System.out.println("constructor of clss Staticex");
}
// instance initialization block
{
System.out.println("instance initialization block");
}
static void m()//static method
{
System.out.println("static method  1 of class Staticex");
}
static void m(int x)//static method overloading
{
System.out.println("static method 2 of class Staticex"+x);
}
}
class Demo
{
public static void main(String args[])
{
Staticex e1=new Staticex();
Staticex e2=new Staticex();
Staticex.m();
Staticex.m(7);
System.out.println(a);
}
}
class A
{
int a=5;//instance variable of super class
A()//Constructor of super classs
{
System.out.println("Constructor of class A");
}
void msg1()// instance method 1 of super class
{
System.out.println("method 1 of super class");
}
void msg2()//// instance method 2 of super class
{
System.out.println("method 2 of super class");
}
} 

class B extends A
{
int a=10;
B()
{
System.out.println("Constructor of class B");
}
void msg1()
{
System.out.println("method 1 of sub class");
}
void msg3()
{
System.out.println("method 3 of sub class");
}
} 

class Demo
{
public static void main(String args[])
{
A  x=new  B();
B y=new B();
x.msg1();
x.msg2();
y.msg3();
System.out.println(x.a);
System.out.println(y.a);
}
}

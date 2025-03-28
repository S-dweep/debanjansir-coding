class SuperA
{
int a;//instance variable
SuperA(int a)//argument constructor
{
this.a=a;
System.out.println("constructor of SuperA");
}
void msg1()//instance method
{
System.out.println("method of SuperA");
}
}

class SubB extends SuperA
{
int a;
SubB()
{
super(12);
System.out.println("constructor of SubB");
a=9;
}
void msg1()
{
System.out.println(a);
super.msg1();
System.out.println(super.a);
System.out.println("method of SubB");
}
}
class Demo
{
public static void main(String args[])
{
SubB b=new SubB();
b.msg1();
}
}

class A
{
int num;
A()
{
num=10;
}
public static void main(String args[])
{
A a=new A();
A b=new A(23);
System.out.println(a.num);
}
}
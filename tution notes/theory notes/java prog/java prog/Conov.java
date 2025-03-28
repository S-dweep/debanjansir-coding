class Conov
{
int a;//instance variable
Conov()//non argument constructor
{
a=8;
System.out.println("non argument constructor");
}
Conov(int x)//argument constructor
{
a=x;
System.out.println("argument constructor");
}
void mul()
{
System.out.println(a*a);
}
}
class Demo
{
public static void main(String args[])
{
Conov c1=new Conov();
Conov c2=new Conov(12);
System.out.println(c1.a*c2.a);
c2.mul();
c1.mul();
}
}

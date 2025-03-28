class A
{
float a; //instance variable
void setVal(float x)//instance method to initialize instance variable
{
a=x;
}
void getter()
{
System.out.println(a);
}
void square()
{
System.out.println(a*a);
}
 public static void main(String args[])
{
A m=new A();
A n=new A();
m.getter();
n.getter();
m.setVal(10);
n.setVal(12);
m.getter();
n.getter();
m.square();
n.square();
}
}
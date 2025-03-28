class Demo
{
public static void main(String[] args)
{
A x=new A();
A y=new A();
x.add(10,2);
y.add(3,5);
}
}
class A
{
void add(int a,int b)
{
int s;
s=a+b;
System.out.println(s);
}
}



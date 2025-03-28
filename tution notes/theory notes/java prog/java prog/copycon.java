class A
{
int a,b;//instance variable
A(int a,int b)//argument constructor
{
this.a=a;
this.b=b;
System.out.println("Argument Constructor");
}
A(A x)//copy constructor
{
this.a=x.a;
this.b=x.b;
System.out.println("copy constructor");
}
public static void main(String args[])
{
A m=new A(12,13);
A n=new A(m);
System.out.println(m.a);
System.out.println(m.b);
System.out.println(n.a);
System.out.println(n.b);
}
}
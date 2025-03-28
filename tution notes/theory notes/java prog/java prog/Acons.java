class A
{
int a,b;
A(int a,int b)
{
System.out.println("Argument Constructor Called");
this.a=a;
this.b=b;
}
void display1()
{
System.out.println(a*b);
}

public static void main(String args[])
{
A m=new A(80,15);
A n=new A(8,5);
n.display1();
m.display1();
}
}
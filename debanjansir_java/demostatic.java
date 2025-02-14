class Demostatic
{
int n;
Demostatic()
{
this.n=n;
System.out.println(n);
}
Demostatic(int n)
{
this.n=n;
System.out.println(n);
}
static void A()
{
System.out.println("No parameters");
}
static void A(int x)
{
System.out.println("Single parameter "+x);
}
static void A(int x, int y)
{
System.out.println("Double parameters "+x+" "+y);
}
public static void main(String args[])
{
Demostatic x=new Demostatic();
Demostatic y=new Demostatic(5);
Demostatic.A();
Demostatic.A(10);
Demostatic.A(10,20);
}
}
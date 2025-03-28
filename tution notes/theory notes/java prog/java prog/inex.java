interface A
{
void msg();
}
interface B
{
void msg();
}
class C implements A,B
{
public void msg()
{
System.out.println("Dekhi ki hoy");
}
public static void main(String args[])
{
C c=new C();
c.msg();
}
}
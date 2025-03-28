interface A
{
int i=9;
void msg1();
}

interface B
{
void msg2();
}

class C implements A,B
{
public void msg1()
{
System.out.println("override method of interface A "+A.i);
}
public void msg2()
{
System.out.println("override method of interface B");
}
public static void main(String args[])
{
C b=new C();
b.msg1();
b.msg2();
System.out.println(A.i);
}
}
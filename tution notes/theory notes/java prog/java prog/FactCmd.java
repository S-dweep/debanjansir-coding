class A
{
long fact(int a)
{
if(a==0||a==1)
{
return 1;
}
else
{
return (a*fact(a-1));
}
}
}
class Demo
{
public static void main(String args[])
{
A x=new A();
System.out.println(x.fact(Integer.parseInt(args[0])));
}
}
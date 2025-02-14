class A
{
int a, b;
A(int a, int b)
{
this.a = a;
this.b = b;
}
void lcm()
{
int gcd=0;
for(int i=1;i<=a && i<=b;i++)
{
if(a%i==0 && b%i==0)
gcd=i;
}
int l=(a*b)/gcd;
System.out.println(l);
}
public static void main(String args[])
{
A ob = new A(Integer.parseInt(args[0]), Integer.parseInt(args[1]));
ob.lcm();
}
}
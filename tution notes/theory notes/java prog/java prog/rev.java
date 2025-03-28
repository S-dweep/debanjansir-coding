class A
{
void rev(int n)
{
int s=0;
while(n!=0)
{
s=10*s+(n%10);
n=n/10;
}
System.out.println(s);
}
}

class Demo
{
public static void main(String args[])
{
A x=new A();
x.rev(234);
}
}
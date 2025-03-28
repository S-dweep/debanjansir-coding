import java.util.*;
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
return a*fact(a-1);
}
}
}

class Demo
{
public static void main(String args[])
{
int m;
Scanner sc=new Scanner(System.in);
System.out.println("enter any positive value");
m=sc.nextInt();
A x=new A();
System.out.println(x.fact(m));
}
}
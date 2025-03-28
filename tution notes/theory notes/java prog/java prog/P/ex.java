package p;
import pack2.*;
import java.util.*;
class Demo
{
public static void main(String args[])
{
int a;
Scanner sc=new Scanner(System.in);
System.out.println("Enter any positive value");
a=sc.nextInt();
Fact x=new Fact();
System.out.println("factorial"+x.factorial(a));
}
}
import java.util.*;
class Ex5
{
void msg(int a)throws ArithmeticException
{
if(a%2==0)
{
System.out.println("even");
}
else
{
throw new ArithmeticException("odd no not allowed");
}
}
public static void main(String args[])
{
int num;
Scanner sc=new Scanner(System.in);
System.out.println("enter any value");
num=sc.nextInt();
Ex5 e1=new Ex5();
try
{
e1.msg(num);
}
catch(Exception e)
{
System.out.println("exception handeled"+e);
}
}
}

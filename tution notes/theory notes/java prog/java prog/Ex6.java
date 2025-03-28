import java.util.*;
class Myexcep extends Exception
{
public String toString()
{
return " User defined exception--odd no not allowed";
}
}
class A
{
void msg(int a)throws Myexcep
{
if(a%2==0)
{
System.out.println("even");
}
else
{
throw new Myexcep();
}
}
public static void main(String args[])
{
int num;
Scanner sc=new Scanner(System.in);
System.out.println("enter any value");
num=sc.nextInt();
A x=new A();
try{
x.msg(num);
}
catch(Myexcep e)
{
System.out.println("exception handeled:"+e);
}
}
}

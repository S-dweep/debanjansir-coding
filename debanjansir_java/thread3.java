import java.util.*;
class Fibonacci extends Thread
{
int n;
Fibonacci(int n)
{
this.n=n;
}
public void run()
{
try{
int t1=0,t2=1,t3;
for(int i=1;i<=n;i++)
{
System.out.println("Fibonacci number:"+i+"="+t1);
t3=t1+t2;
t1=t2;
t2=t3;
Thread.sleep(500);
}
}
catch(Exception e){}
System.out.println("Fibonacci end");
}
}
class AP extends Thread
{
int n;
AP(int n)
{
this.n=n;
}
public void run()
{
try{
int t=1;
for(int i=1;i<=n;i++)
{
System.out.println("AP series:"+i+"="+t);
t+=3;
Thread.sleep(1500);
}
}
catch(Exception e){}
System.out.println("AP series end");
}
}
class Square extends Thread
{
int n;
Square(int n)
{
this.n=n;
}
public void run()
{
try{
for(int i=1;i<=n;i++)
{
System.out.println("Square:"+i+"="+(i*i));
Thread.sleep(2500);
}
}
catch(Exception e){}
System.out.println("Square end");
}
}
class A
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
Fibonacci ob1=new Fibonacci(n);
AP ob2=new AP(n);
Square ob3=new Square(n);
ob1.start();
ob2.start();
ob3.start();
}
}
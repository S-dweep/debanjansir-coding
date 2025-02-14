import java.util.*;
class Even extends Thread
{
int n;
Even(int n)
{
this.n=n;
}
public void run()
{
try{
int num=2;
for(int i=1;i<=n;i++)
{
System.out.println("Even number:"+i+"="+num);
num+=2;
Thread.sleep(1500);
}
}
catch(Exception e){}
System.out.println("Even end");
}
}
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
for(int j=1;j<=n;j++)
{
System.out.println("Fibonacci number:"+j+"="+t1);
t3=t1+t2;
t1=t2;
t2=t3;
Thread.sleep(2500);
}
}
catch(Exception e){}
System.out.println("Fibonacci end");
}
}
class A
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
Even ob1=new Even(n);
Fibonacci ob2=new Fibonacci(n);
ob1.start();
ob2.start();
}
}
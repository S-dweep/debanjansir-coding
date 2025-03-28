class Threadone implements Runnable
{
Threadone()
{
Thread t=new Thread(this,"New Thread");
System.out.println("Details of Threadone :"+t);
t.start();
}
public void run()
{
try
{
for(int i=1;i<=5;i++)
{
System.out.println("From Threadone 1:i="+i);
Thread.sleep(1000);
}
}
catch(Exception e){}
System.out.println("exit from Threadone");
}
}
class Demo
{
public static void main(String args[])
{
new Threadone();
try
{
for(int i=1;i<=5;i++)
{
System.out.println("From MainThread 1:i="+i);
Thread.sleep(5000);
}
}
catch(Exception e){}
System.out.println("exit from Main Thread");
}
}
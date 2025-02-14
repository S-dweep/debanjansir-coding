import java.util.*;
class Palindrome extends Thread
{
int n;
Palindrome(int n)
{
this.n=n;
}
public void run()
{
int a=1,count=0;
try{
while(count<n)
{
int rev=0;
int b=a;
while(b>0)
{
rev=(rev*10)+(b%10);
b/=10;
}
if(rev==a)
{
count++;
System.out.println("Palindrome number:"+count+"="+a);
}
a++;
Thread.sleep(1500);
}
}
catch(Exception e){}
System.out.println("Palindrome end");
}
}
class Prime extends Thread
{
int n;
Prime(int n)
{
this.n=n;
}
public void run()
{
int num=1,c=0,i;
try{
while(c<n)
{
for(i=2;i<=num/2;i++)
{
if(num%i==0)
break;
}
if(i>num/2 && num!=1)
{
c++;
System.out.println("Prime number:"+c+"="+num);
}
num++;
Thread.sleep(2500);
}
}
catch(Exception e){}
System.out.println("Prime end");
}
}
class A
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
Palindrome ob1=new Palindrome(n);
Prime ob2=new Prime(n);
ob1.start();
ob2.start();
}
}
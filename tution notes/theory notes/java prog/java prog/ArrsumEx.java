import java.util.*;
class Myexcep extends Exception
{
public String toString()
{
return "User defined exception..Pallindrome number not allowed";
}
}
class A
{
void sum(int arr[])throws Myexcep
{
int i,s=0,rem,rev,temp;
for(i=0;i<arr.length;i++)
{
rev=0;
temp=arr[i];
while(temp!=0)
{
rem=temp%10;
rev=10*rev+rem;
temp=temp/10;
}
if(arr[i]==rev)
{
throw new Myexcep();
}
else
{
s=s+arr[i];
}
}
System.out.println(s);
}
}
class Demo
{
public static void main(String args[])
{
int num[],n,i;
A x=new A();
Scanner sc=new Scanner(System.in);
System.out.println("Enter no of values");
n=sc.nextInt();
num=new int[n];
System.out.println("enter "+n+" values");
for(i=0;i<n;i++)
{
num[i]=sc.nextInt();
}
try
{
x.sum(num);
}
catch(Exception e)
{
System.out.println(e);
}
}
}

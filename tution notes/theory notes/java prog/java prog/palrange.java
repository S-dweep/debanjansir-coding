import java.util.*;
class A
{
public static void main(String args[])
{
int i,a,b,rem,rev=0,temp;
Scanner sc=new Scanner(System.in);
System.out.println("enter upper limit");
a=sc.nextInt();
System.out.println("enter lower limit");
b=sc.nextInt();
for(i=a;i<=b;i++)
{
rev=0;
temp=i;
while(temp!=0)
{
rem=temp%10;
rev=10*rev+rem;
temp=temp/10;
}
if(rev==i)
{
System.out.println(i);
}
}
}
}

class A
{
int n;
void create(int n)
{
this.n = n;
}
void nth_fibo()
{
int c=2,t1=0,t2=1,t3=0;
if(n==1)
System.out.println(t1);
else if(n==2)
System.out.println(t2);
else
{
while(c!=n)
{
t3=t1+t2;
t1=t2;
t2=t3;
c++;
}
System.out.println(t3);
}
}
public static void main(String args[])
{
A ob = new A();
ob.create(Integer.parseInt(args[0]));
ob.nth_fibo();
}
}
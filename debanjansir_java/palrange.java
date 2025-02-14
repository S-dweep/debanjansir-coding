class A
{
int a,b;
void create(int a, int b)
{
this.a = a;
this.b = b;
}
void palindrome()
{
int i,rev,d,c=0;
for(i=a;i<b;i++)
{
rev=0;
int num=i;
while(num>0)
{
d = num%10;
rev = (rev*10)+d;
num = num/10;
}
if(rev==i)
{
System.out.println(i);
c++;
}
}
System.out.println(c);
}
public static void main(String args[])
{
A ob = new A();
ob.create(Integer.parseInt(args[0]),Integer.parseInt(args[1]));
ob.palindrome();
}
}
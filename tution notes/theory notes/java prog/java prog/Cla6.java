class Cla6
{
void isPrime(int a,int b)
{
int i,j,flag;
for(i=a;i<=b;i++)
{
flag=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag++;
break;
}
}
if(flag==0&&i>1)
{
System.out.println(i);
}
}
}
}
class Demo
{
public static void main(String args[])
{
Cla6 c=new Cla6();
c.isPrime(Integer.parseInt(args[0]),Integer.parseInt(args[1]));
}
}
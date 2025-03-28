class Cla5
{
void msg(int a,int b)
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
if(flag==0&&i!=1)
{
System.out.println(i);
}
}
}
public static void main(String args[])
{
Cla5 c=new Cla5();
c.msg(Integer.parseInt(args[0]),Integer.parseInt(args[1]));
}
}
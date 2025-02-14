class A
{
int a,b;
A(int a, int b)
{
this.a = a;
this.b = b;
}
void armstrong()
{
int i,sum,num,d,c,count=0;
for(i=a;i<b;i++)
{
c=0;
num=i;
while(num>0)
{
c++;
num = num/10;
}
num=i;
sum=0;
while(num>0)
{
d = num%10;
sum += Math.pow(d,c);
num = num/10;
}
if(sum==i)
{
System.out.println(i);
count++;
}
}
System.out.println(count);
}
public static void main(String args[])
{
A ob = new A(Integer.parseInt(args[0]),Integer.parseInt(args[1]));
ob.armstrong();
}
}
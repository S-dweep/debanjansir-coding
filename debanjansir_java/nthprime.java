class A
{
int n;
A(int n)
{
this.n = n;
}
void nth_prime()
{
int j,c = 0,i=2,res = 0;
while(c!=n)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
break;
}
if(j>i/2)
{
res = i;
c++;
}
i++;
}
System.out.println(res);
}
public static void main(String args[])
{
A ob = new A(Integer.parseInt(args[0]));
ob.nth_prime();
}
}
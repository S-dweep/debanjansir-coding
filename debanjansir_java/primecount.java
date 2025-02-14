class A
{
int a, b;
void initialize(int a, int b)
{
this.a = a;
this.b = b;
}
void Primec()
{
int i,j,c,count = 0;
for(i = a; i <= b; i++)
{
c = 0;
for(j = 2; j <= i/2; j++)
{
if(i % j == 0)
{
c++;
break;
}
}
if(c==0 && i!=1)
{
count++;
}
}
System.out.println("No of prime nos. = "+count);
}
public static void main(String args[])
{
A ob = new A();
ob.initialize(Integer.parseInt(args[0]),Integer.parseInt(args[1]));
ob.Primec();
}
}
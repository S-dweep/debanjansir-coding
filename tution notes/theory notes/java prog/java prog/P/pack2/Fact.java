package pack2;
public class Fact
{
public long factorial(int a)
{
if(a==0||a==1)
{
return 1;
}
else
{
return(a*factorial(a-1));
}
}
}
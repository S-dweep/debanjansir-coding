package pkg;
class Myexcep extends Exception
{
public String toString()
{
return "negative not allowed";
}
}
public class P1
{
public void add(int a,int b)throws Exception
{
if(a<0||b<0)
{
throw new Myexcep();
}
else
{
System.out.println(a+b);
}
}
}
class A
{
public static void main(String args[])
{
String a="hello";
String b="hello";
String c=new String("hello");
String d=new String("hello");
String e=new String("hello,how r u?");
a+="hi";
if("king"=="king")
{
System.out.println("true");
}
else
{
System.out.println("false");
}
if(a==b)
{
System.out.println("a & b both refer to same object");
}
else
{
System.out.println("a & b both refer to different object "+a);
}
if(c==d)
{
System.out.println("c & d both refer to same object");
}
else
{
System.out.println("c & d both refer to different object");
}
String f=e.intern();
if(f==e)
{
System.out.println("same");
}
else
{
System.out.println("e & f are different,because interned object has been created in memory pool");
}
String m="This is demo string";
System.out.println(m.indexOf("is"));

}
}
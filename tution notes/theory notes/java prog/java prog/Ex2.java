class Ex2
{
public static void main(String args[])
{
method1();
System.out.println("back into main");
}
static void method1()
{
System.out.println("In method 1,calling method 2");
method2();
System.out.println("Returned from method 2");
}
static void method2()
{
System.out.println("In method 2,calling method 3");
method3();
System.out.println("Returned from method 3");
}
static void method3()
{
System.out.println("In method 3");
int a=20,b=0,c;
try{
c=a/b;
}
catch(ArithmeticException ex)
{
System.out.println("Exception Handeled "+ex);
}
finally{
System.out.println("method 3 exits");
}
}
}
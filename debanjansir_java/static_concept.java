class A
{
static int a=10, b=20;
static
{
System.out.println("This is static block..");
a=a+10;
}
static void sum()
{
System.out.println("This is static method..");
System.out.println("Sum: "+(a+b));
}
public static void main(String args[])
{
sum();
}
}
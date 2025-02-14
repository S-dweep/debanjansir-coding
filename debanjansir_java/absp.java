abstract class A
{
	A()
	{
		System.out.println("This is constructor");
	}
	abstract void msg1();
	void msg2()
	{
		System.out.println("This is non abstract method");
	}
	static void msg3()
	{
		System.out.println("This is static method");
	}
}
class B extends A
{
	void msg1()
	{
		System.out.println("Abstract method overriden");
	}
}
class C
{
	public static void main(String args[])
	{
		A ob=new B();
		ob.msg1();
		ob.msg2();
		A.msg3();
	}
}	
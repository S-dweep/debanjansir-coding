class A
{
	void msg()
	{
		System.out.println("Hello 1");
	}
}
class B extends A
{
	void msg()
	{
		System.out.println("Hello 2");
	}
}
class C extends A 
{
	void msg()
	{
		System.out.println("Hello 3");
	}
}
class D extends C 
{
	void msg()
	{
		System.out.println("Hello 4");
	}
}
class Demo
{
	public static void main(String args[])
	{
		A ob=new A();
		ob.msg();
		ob=new B();
		ob.msg();
		ob=new C();
		ob.msg();
		ob=new D();
		ob.msg();
	}
}




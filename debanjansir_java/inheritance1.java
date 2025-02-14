class A
{
	void m()
	{
		System.out.println("Hello 1");
	}
}
class B extends A
{
	void m()
	{
		System.out.println("Hello 2");
	}
}
class C extends A 
{
	void m()
	{
		System.out.println("Hello 3");
	}
}
class D extends C 
{
	void m()
	{
		System.out.println("Hello 4");
	}
}
class Demo
{
	public static void main(String args[])
	{
		A ob=new A();
		ob.m;
		ob=new B();
		ob.m;
		ob=new C();
		ob.m;
		ob=new D();
		ob.m;
	}
}




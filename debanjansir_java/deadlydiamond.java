interface A
{
	void m();
}
interface B extends A
{
	void m();
}
interface C extends A
{
	void m();
}
class D implements B,C
{
	public void m() {System.out.println("Final");}
	public static void main(String args[])
	{
		D ob=new D();
		ob.m();
	}
} 
		
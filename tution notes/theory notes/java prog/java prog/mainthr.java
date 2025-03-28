class M
{
public static void main(String args[])
{
Thread obj=Thread.currentThread();
System.out.println("Current Thread: "+obj);
obj.setName("New Thread");
obj.setPriority(Thread.MIN_PRIORITY);
System.out.println("Current Thread: "+obj);
}
}
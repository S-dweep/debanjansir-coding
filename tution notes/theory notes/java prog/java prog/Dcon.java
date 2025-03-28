class Dcon
{
int num;
Dcon()
{
System.out.println("non argument constructor");
}
void display()
{
System.out.println("value of instance variable"+num);
}
public static void main(String a[])
{
Dcon d=new Dcon();
d.display();
}
}
import java.util.*;
class A
{
public static void main(String args[])
{
int id;
String name,address;
double sal;
Scanner sc=new Scanner(System.in);
System.out.println("enter id");
id=sc.nextInt();
System.out.println("enter salary");
sal=sc.nextDouble();
sc.nextLine();
System.out.println("enter name");
name=sc.nextLine();
System.out.println("enter your address");
address=sc.nextLine();
System.out.println("id="+id);
System.out.println("Name="+name);
System.out.println("salary="+sal);
System.out.println("Address="+address);
}
}
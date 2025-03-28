import java.util.*;
class Student
{
Student()
{
System.out.println("UNKNOWN");
}
Student(String name)
{
System.out.println(name);
}
}
class Demo
{
public static void main(String args[])
{
String name;
Scanner sc=new Scanner(System.in);
System.out.println("enter any value");
name=sc.nextLine();
Student s1=new Student();
Student s2=new Student(name);
}
}
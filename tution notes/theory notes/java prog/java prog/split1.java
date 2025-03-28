import java.util.*;
class A
{
public static void main(String args[])
{
String str;
System.out.println("enter any string");
Scanner sc=new Scanner(System.in);
str=sc.nextLine();
StringTokenizer tr=new StringTokenizer(str," ");
while(tr.hasMoreTokens())
{
System.out.println(tr.nextToken());
}
}
}
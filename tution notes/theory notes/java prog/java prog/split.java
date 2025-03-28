import java.util.*;
class A
{
public static void main(String args[])
{
int i=1;
String str="hello how are you";
StringTokenizer tr=new StringTokenizer(str," ");
while(tr.hasMoreTokens())
{
System.out.print("Token "+i+ ": ");
System.out.println(tr.nextToken());
++i;
}
String[] tk=str.split(" ",3);
for(String token: tk)
System.out.println(token);
}
}
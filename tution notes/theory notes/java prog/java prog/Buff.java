import java.io.*;
class A
{
public static void main(String args[])throws IOException{
float a,b;
System.out.println("enter two values");
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
a=Float.parseFloat(br.readLine());
b=Float.parseFloat(br.readLine());
System.out.println(a+b);
}
}
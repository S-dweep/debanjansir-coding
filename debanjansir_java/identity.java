import java.util.*;
class A
{
boolean isIdentity(int arr[][])
{
for(int i=0;i<arr.length;i++)
{
for(int j=0;j<arr.length;j++)
{
if(i==j && arr[i][j]!=1)
return false;
else if(i!=j && arr[i][j]!=0)
return false;
}
}
return true;
}
public static void main(String args[])
{
int n;
A ob=new A();
Scanner sc=new Scanner(System.in);
int r=sc.nextInt();
int c=sc.nextInt();
if(r!=c)
System.out.println("Not Identity matrix");
else
{
int arr[][]=new int[r][c];
System.out.println("Enter array elements:");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
arr[i][j]=sc.nextInt();
}
System.out.print("");
}
if(ob.isIdentity(arr))
System.out.println("Identity matrix");
else
System.out.println("Not Identity matrix");
}
}
}



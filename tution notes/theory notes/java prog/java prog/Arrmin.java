import java.util.*;
class Arrmin
{
int min(int arr[])
{
int i,small;
small=arr[0];
for(i=1;i<arr.length;i++)
{
if(small>arr[i])
{
small=arr[i];
}
}
return small;
}
}
class Demo
{
public static void main(String args[])
{
int n,i;
Arrmin a=new Arrmin();
Scanner sc=new Scanner(System.in);
System.out.println("enter no of elements of array");
n=sc.nextInt();
int num[]=new int[n];
System.out.println("enter "+n+" elements");
for(i=0;i<n;i++)
{
num[i]=sc.nextInt();
}
System.out.println("smallest element is "+a.min(num));
}
}

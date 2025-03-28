import java.util.*;
class A
{
public static void main(String args[])
{
int arr[],n,i;
Scanner sc=new Scanner(System.in);
System.out.println("enter no of elements");
n=sc.nextInt();
arr=new int[n];
System.out.println("enter "+n+" elements");
for(i=0;i<arr.length;i++)
{
arr[i]=sc.nextInt();
}
for(i=0;i<n/2;i++)
{
arr[i]=arr[i]^arr[n-1-i];
arr[n-1-i]=arr[i]^arr[n-1-i];
arr[i]=arr[i]^arr[n-1-i];
}
System.out.println("reverse array");
for(i=0;i<n;i++)
{
System.out.println(arr[i]);
}
}
}
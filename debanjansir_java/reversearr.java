import java.util.*;
class A
{
void rev(int arr[])
{
int temp;
for(int i=0,j=arr.length-1;i<arr.length/2;i++,j--)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
System.out.println("\nReversed array:");
for(int i=0;i<arr.length;i++)
{
System.out.print(arr[i]+" ");
}
}
public static void main(String args[])
{
int n;
A ob=new A();
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
int arr[]=new int[n];
System.out.println("Enter array elements:");
for(int i=0;i<n;i++)
{
arr[i]=sc.nextInt();
}
System.out.println("Original array:");
for(int i=0;i<n;i++)
{
System.out.print(arr[i]+" ");
}
ob.rev(arr);
}
}



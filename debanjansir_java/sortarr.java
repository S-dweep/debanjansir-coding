import java.util.*;
class A
{
void sort(int arr[])
{
int temp;
for(int i=0;i<arr.length-1;i++)
{
for(int j=0;j<arr.length-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
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
for(int i=0;i<n;i++)
{
arr[i]=sc.nextInt();
}
ob.sort(arr);
}
}



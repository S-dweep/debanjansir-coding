import java.util.*;
class A
{
void swap(int arr[],int k)
{
int temp;
temp=arr[k-1];
arr[k-1]=arr[arr.length-k];
arr[arr.length-k]=temp;
for(int i=0;i<arr.length;i++)
{
System.out.print(arr[i]+" ");
}
}
public static void main(String args[])
{
int k,n;
A ob=new A();
Scanner sc=new Scanner(System.in);
k=sc.nextInt();
n=sc.nextInt();
int arr[]=new int[n];
for(int i=0;i<n;i++)
{
arr[i]=sc.nextInt();
}
ob.swap(arr,k);
}
}



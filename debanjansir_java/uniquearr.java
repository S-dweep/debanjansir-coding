import java.util.*;
class A
{
void unique(int arr[])
{
for(int i=0;i<arr.length;i++)
{
int c=0;
for(int j=0;j<arr.length;j++)
{
if(arr[j]==arr[i])
c++;
}
if(c==1)
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
ob.unique(arr);
}
}



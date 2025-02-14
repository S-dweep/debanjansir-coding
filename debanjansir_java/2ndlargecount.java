import java.util.*;
class A
{
public static void main(String args[])
{
int n,count=0;
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
int arr[]=new int[n];
for(int i=0;i<n;i++)
{
arr[i]=sc.nextInt();
}
int l=arr[0],sl=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]>l)
{
sl=l;
l=arr[i];
}
else if(arr[i]>sl && arr[i]<l)
{
sl=arr[i];
}
}
for(int i=0;i<n;i++)
{
if(arr[i]==sl)
count++;
}
System.out.println(count);
}
}



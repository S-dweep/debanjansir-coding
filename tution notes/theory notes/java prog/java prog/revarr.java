class A
{
public static void main(String args[])
{
int arr[]={1,5,6,7,8,9},i,n;
System.out.println("original Array");
for(i=0;i<arr.length;i++)
{
System.out.println(arr[i]);
}
n=arr.length;
for(i=0;i<arr.length/2;i++)
{
arr[i]=arr[i]+arr[n-1-i];
arr[n-1-i]=arr[i]-arr[n-1-i];
arr[i]=arr[i]-arr[n-1-i];
}
System.out.println("Reverse Array");
for(i=0;i<arr.length;i++)
{
System.out.println(arr[i]);
}
}
}
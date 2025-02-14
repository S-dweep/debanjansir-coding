import java.util.*;
class A
{
void dsum(int arr[][])
{
int rd_sum=0,ld_sum=0;
for(int i=0;i<arr.length;i++)
{
rd_sum+=arr[i][i];
ld_sum+=arr[i][arr.length-i-1];
}
System.out.println(Math.abs(rd_sum-ld_sum));
}
public static void main(String args[])
{
int n;
A ob=new A();
Scanner sc=new Scanner(System.in);
int r=sc.nextInt();
int c=sc.nextInt();
if(r!=c)
System.out.println("Not possible");
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
ob.dsum(arr);
}
}
}



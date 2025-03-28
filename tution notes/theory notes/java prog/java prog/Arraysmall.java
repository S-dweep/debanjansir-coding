class A
{
static int method1(int a[])
{
int min,i;
min=a[0];
for(i=0;i<a.length;i++)
{
if(min>a[i])
{
min=a[i];
}
}
return min;
}
public static void main(String args[])
{
int a[]={1,5,6,4,7,8};
System.out.println("smallest element is "+method1(a));
}
}
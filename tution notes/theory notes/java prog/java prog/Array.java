class A
{
public static void main(String args[])
{
int num[]={3,5,6,2,8,11,4},i,max;
max=num[0];
for(i=1;i<num.length;i++)
{
if(max<num[i])
{
max=num[i];
}
}
System.out.println("Largest element"+max);
}
}
import java.util.*;
class Exp extends Exception{
    public String toString(){
        return "UserDefinedException: negative element";
    }
}
class A{
    public static void main(String args[]) throws Exp{
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
	for(int i=0;i<n;i++){
        try{
               if(arr[i]>0) System.out.println(arr[i]+" is positive");
               else throw new Exp();
           }
        catch(Exception e){
            System.out.println(e);
        }
	}
    }
}
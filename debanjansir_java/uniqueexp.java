import java.util.*;
class Exp extends Exception{
    public String toString(){
        return "Exception occurs";
    }
}
class A{
    void unique(int arr[])throws Exp{
	int res=0;
        for(int i=0;i<arr.length;i++){
            int count=0;
            for(int j=0;j<arr.length;j++){
                if(arr[i]==arr[j]) count++;
            }
            if(count>1) throw new Exp();
        }
        System.out.println("Yes");
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        A ob=new A();
        try{
            ob.unique(arr);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
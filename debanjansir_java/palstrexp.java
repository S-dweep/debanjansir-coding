import java.util.*;
class Exp extends Exception{
    public String toString(){
        return "Exception occurs: Not palindrome";
    }
}
class A{
    void palindrome(String s)throws Exp{
	int c=0;
        for(int i=0;i<=s.length()/2;i++){
                if(s.charAt(i)!=s.charAt(s.length()-i-1))
		{
			c=1;
			break;
		}
            }
            if(c==1) throw new Exp();
	    else
            System.out.println("Yes");
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        A ob=new A();
        try{
            ob.palindrome(s);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
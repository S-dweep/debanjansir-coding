import java.util.*;
class SwapPairs{
    public static String swap(String str){
        StringBuilder s=new StringBuilder(str);
        for(int i=0;i<s.length()-1;i+=2){
            char ch=s.charAt(i);
            s.setCharAt(i, s.charAt(i+1));
            s.setCharAt(i+1,ch);
        }
        return s.toString();
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        String res=swap(str);
        System.out.println(res);
    }
}
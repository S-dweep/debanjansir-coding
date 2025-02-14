import java.util.*;
class A {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine();
        String s2=sc.nextLine();
        int c=1;
        if(s1.length()!=s2.length()){
            System.out.println("0");
        }
        else{
            for(int i=0;i<s1.length();i++){
                if(s1.charAt(i)!=s2.charAt(i)){
                    c=0;
                    break;
                }
            }
            if(c==0) System.out.println(c);
            else System.out.println(c);
        }
    }
}
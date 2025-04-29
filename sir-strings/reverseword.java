import java.util.*;
class reverseword{
    public static String reverse(String str){
        StringBuilder res=new StringBuilder();
        int n=str.length();
        int start=0;
        for(int i=0;i<=n;i++){
            if(i==n||str.charAt(i)==' '){
                StringBuilder word=new StringBuilder(str.substring(start,i));
                res.append(word.reverse());
                if(i!=n) res.append(" ");
                start=i+1;
            }
        }
        return res.toString();
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        String rev=reverse(str);
        System.out.println(rev);
        sc.close();
    }
}
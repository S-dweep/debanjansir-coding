import java.util.*;
class Main {
    static void reverse(StringBuilder sb, int beg, int end){
        if(beg>=end) return;
        char temp=sb.charAt(beg);
        sb.setCharAt(beg,sb.charAt(end));
        sb.setCharAt(end,temp);
        reverse(sb,beg+1,end-1);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        StringBuilder sb=new StringBuilder(s);
        reverse(sb,0,sb.length()-1);
        System.out.println(sb);
    }
}
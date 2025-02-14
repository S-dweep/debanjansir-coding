import java.util.*;
class A {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        s+=' ';
        StringBuffer rev=new StringBuffer(s);
        int j=0;
        for(int i=0;i<rev.length();i++){
            if(rev.charAt(i)==' '){
                int k=i-1;
                while(j<=k){
                    char temp=rev.charAt(j);
                    rev.setCharAt(j,rev.charAt(k));
                    rev.setCharAt(k,temp);
                    j++;
                    k--;
                }
                j=i+1;
            }
        }
        System.out.println(rev);
    }
}
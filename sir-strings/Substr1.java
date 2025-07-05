import java.util.*;
public class Substr1 {
    public static int countSubstr(String str){
        int count=0;
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)=='1'){
                for(int j=i+1;j<str.length();j++){
                    if(str.charAt(j)=='1') count++;
                }
            }
        } return count;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        System.out.println(countSubstr(str));
        sc.close();
    }
}

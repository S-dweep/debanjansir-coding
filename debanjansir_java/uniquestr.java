import java.util.*;
class A {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int freqarr[]=new int[256];
        for(int i=0;i<s.length();i++){
            freqarr[s.charAt(i)]++;
        }
        for(int i=0;i<s.length();i++){
            if(freqarr[s.charAt(i)]>1)
            System.out.print(s.charAt(i));
            if(freqarr[s.charAt(i)]==1)
            System.out.print("_");
        }
    }
}
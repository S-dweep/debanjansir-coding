import java.util.*;

class MyExp extends Exception {
    public String msg() {
        return "User defined exception: does not contain vowel";
    }
}

class NoVowelexp { 
    public static void hasVowel(String str) throws MyExp {
        int count=0;
        str=str.toLowerCase();
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||
            str.charAt(i)=='o'||str.charAt(i)=='u') count++;
        }
        if(count>0) System.out.println("Contains vowel");
        else throw new MyExp();
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.next();
        try {
            hasVowel(str);
        } catch (MyExp e) {
            System.out.println(e.msg());
        } finally {
            sc.close();
        }
    }
}
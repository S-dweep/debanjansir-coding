import java.util.*;

class MyExp2 extends Exception {
    public String msg() {
        return "User defined exception: not palindrome";
    }
}

class PalStrexp { 
    public static void isPalindrome(String str) throws MyExp2 {
        int start=0;
        int end=str.length()-1;
        while(start<end){
            if(str.charAt(start)!=str.charAt(end)){
                throw new MyExp2();
            }
            start++;
            end--;
        }
        System.out.println("Palindrome");
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.next();
        try {
            isPalindrome(str);
        } catch (MyExp2 e) {
            System.out.println(e.msg());
        } finally {
            sc.close();
        }
    }
}
import java.util.*;
class Str1 {
    public static boolean isPalindrome(String s, int low, int high) {
        while (low < high) {
            if (s.charAt(low) != s.charAt(high)) return false;
            low++;
            high--;
        }
        return true;
    }
    public static String longestPalindrome(String str) {
        int maxi = 1;
        int start=0;
        for (int i = 0; i < str.length(); i++) {
            for (int j = i; j < str.length(); j++) {
                if (isPalindrome(str, i, j) && (j - i + 1) > maxi) {
                    start = i;
                    maxi = j - i + 1;
                }
            }
        }
        return str.substring(start, start + maxi);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        System.out.println(longestPalindrome(str));
    }
}
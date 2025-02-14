import java.util.*;
class A {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        if(isPalindrome(s)) System.out.println(s+" is palindrome");
        else System.out.println(s+" is not palindrome");
    }
        public static boolean isPalindrome(String s)
        {
            for(int i=0,j=s.length()-1;i<s.length()/2;i++)
            {
                if(s.charAt(i)!=s.charAt(j))
                {
                    return false;
                }
                j--;
            }
            return true;
        }
}
import java.util.*;
class NthPalindrome{
    public static boolean isPalindrome(int num){
        int rev=0;
        int n=num;
        while(n>0){
            rev=(rev*10)+(n%10);
            n/=10;
        }
        return rev==num;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int count=0;
        int num=1;
        while(true){
            if(isPalindrome(num)){
                count++;
                if(count==n){
                    System.out.println(num);
                    break;
                }
            }
            num++;
        }
        sc.close();
    }
}
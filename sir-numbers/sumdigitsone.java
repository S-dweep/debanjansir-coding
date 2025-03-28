// find sum of digits until single digit is obtained
// Example: 1234 => 1+2+3+4 = 10 => 1+0 = 1
// Time complexity: 
// Space complexity: O(1)

import java.util.*;
class sumdigitsone {
    public static int sumdigits(int n) {
        while(n>=10){
            int sum = 0;
            while(n>0){
                sum += n%10;
                n /= 10;
            }
            n = sum;
        } return n;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();  
        System.out.println(sumdigits(n));
        sc.close();
    }
}
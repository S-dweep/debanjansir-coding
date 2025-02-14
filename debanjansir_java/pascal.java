import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=n-1;j>=i;j--){
                System.out.print(" ");
            }
            int num=1;
            for(int k=1;k<=i;k++){
                System.out.print(num+" ");
                num=num*(i-k)/(k);
            }
            System.out.print("\n");
        }
    }
}
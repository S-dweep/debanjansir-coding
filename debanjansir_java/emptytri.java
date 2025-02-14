import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=n-1;j>=i;j--){
                System.out.print(" ");
            }
            for(int k=1;k<=(2*i)-1;k++){
                if(i==1||k==1||i==n||k==(2*i)-1)
                System.out.print("1");
                else
                System.out.print(" ");
            }
            System.out.print("\n");
        }
    }
}
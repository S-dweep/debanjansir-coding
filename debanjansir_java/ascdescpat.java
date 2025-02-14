import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=n-1;j>=i;j--){
                System.out.print(" ");
            }
            for(int k=i;k<=(2*i)-1;k++){
                System.out.print(k);
            }
            for(int l=(2*i)-1;l>i;l--){
                System.out.print(l-1);
            }
            System.out.print("\n");
        }
    }
}
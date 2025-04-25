import java.util.*;

class CheckIdentityMat { 
    public static boolean checkIdentity(int mat[][], int n, int m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j && mat[i][j]!=1) return false;
                if(i!=j && mat[i][j]!=0) return false;
            }
        } return true;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int mat[][]=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i][j]=sc.nextInt();
            }
        }
        if(checkIdentity(mat,n,m)) System.out.println("Identity");
        else System.out.println("Not identity");
        sc.close();
    }
}
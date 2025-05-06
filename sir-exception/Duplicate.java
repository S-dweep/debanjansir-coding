import java.util.*;

class MyExp extends Exception {
    public String msg() {
        return "User defined exception: duplicate entry";
    }
}

class Duplicate { 
    public static void checkDuplicate(int arr[], int n) throws MyExp {
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]) throw new MyExp();
            }
        }
        System.out.println("No duplicates");
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        try {
            checkDuplicate(arr,n);
        } catch (MyExp e) {
            System.out.println(e.msg());
        } finally {
            sc.close();
        }
    }
}
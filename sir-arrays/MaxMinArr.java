import java.util.*;

class MaxMinArr {
    public static void rearrange(int arr[], int n) {
        int minind = 0;
        int maxind = n - 1;
        int maxelm = arr[n - 1] + 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr[i] += (arr[maxind] % maxelm) * maxelm;
                maxind--;
            } else {
                arr[i] += (arr[minind] % maxelm) * maxelm;
                minind++;
            }
        }
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] / maxelm;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        rearrange(arr, n);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
}
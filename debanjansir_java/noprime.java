import java.util.*;
class A {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int psum=0,npsum=0;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=2;j<=(arr[i]/2);j++)
            {
                if(arr[i]%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==1) npsum+=arr[i];
	    else psum+=arr[i];
        }
        System.out.println(psum-npsum);
    }
}
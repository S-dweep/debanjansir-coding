import java.util.*;
class Main {
    public static int nthprime(int n){
        int count=0, num=2, i, res=0;
        while(count!=n){
            for(i=2;i<=num/2;i++){
                if(num%i==0) break;
            }
            if(i>num/2){
                res=num;
		count++;
            }
            num++;
        } return res;
    }
    public static void main(String[] args) {
        int res=nthprime(Integer.parseInt(args[0]));
        System.out.println(res);
    }
}
import java.util.*;
class Arr1{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        HashMap<Integer, Integer> m=new HashMap<>();
        List<Integer> res=new ArrayList<>();
        for(int num:arr){
            if(!m.containsKey(num)) res.add(num);
            m.put(num,m.getOrDefault(num,0)+1);
        }
        for(int i=0;i<res.size();i++){
            for(int j=i+1;j<res.size();j++){
                if(m.get(res.get(j))>m.get(res.get(i))){
                    int temp=res.get(i);
                    res.set(i,res.get(j));
                    res.set(j,temp);
                }
            }
        }
        for(int num:res){
            int count=m.get(num);
            for(int i=0;i<count;i++){
                System.out.print(num+" ");
            }
        }
    }
}
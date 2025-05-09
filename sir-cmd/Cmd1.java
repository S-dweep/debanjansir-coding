class Cmd1{
    public static void largest(String arr[]){
        int large=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            if(Integer.parseInt(arr[i])>large) large=Integer.parseInt(arr[i]);
        }
        System.out.println(large);
    }
    public static void main(String args[]){
        largest(args);
    }
}
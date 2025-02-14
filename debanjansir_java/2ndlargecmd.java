class Main {
    public static int slarge(int arr[]){
        int l=-1, sl=-1;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>l){
                sl=l;
                l=arr[i];
            }
            else if(arr[i]<l && arr[i]>sl){
                sl=arr[i];
            }
        } return sl;
    }
    public static void main(String[] args) {
        int arr[]=new int[args.length];
        for(int i=0;i<args.length;i++){
            arr[i]=Integer.parseInt(args[i]);
        }
        int res=slarge(arr);
        System.out.println(res);
    }
}
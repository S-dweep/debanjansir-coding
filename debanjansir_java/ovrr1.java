class Shape{
    public void getArea(){
        System.out.println("area method");
    }
}
class Rectangle extends Shape{
    int l,b;
    Rectangle(int l, int b){
        this.l=l;
        this.b=b;
    }
    public void getArea(){
        System.out.println("area of rectangle: "+l*b);
    }
}
class Main {
    public static void main(String[] args) {
        Rectangle ob=new Rectangle(4,6);
        ob.getArea();
    }
}
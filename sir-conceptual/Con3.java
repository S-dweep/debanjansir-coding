class A{
    public void food(){
        System.out.println("I love biriyani");
    }
}
class B extends A{
    public void food(){
        System.out.println("I love kosha mangsho");
    }
    public void play(){
        System.out.println("I love cricket");
    }
}
class C extends B{
    public void food(){
        System.out.println("I love dal bhat");
    }
}
class D extends B{
    public void play(){
        System.out.println("I love football");
    }
}
class Con3{
    public static void main(String args[]){
        A a=new A();
        B b=new B();
        C c=new C();
        D d=new D();
        a.food();
        b.food();
        b.play();
        c.food();
        c.play();
        d.food();
        d.play();
    }
}

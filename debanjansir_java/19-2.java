class A
{ void m1() {System.out.println("1"); }}
class B extends A
{ void m2() {System.out.println("2.1"); }}
class C extends A
{ void m3() {System.out.println("2.2"); }}
class D extends B
{ void m4() {System.out.println("3"); }}
interface P
{ void m5(); }
class E extends B implements P
{ public void m5() {System.out.println("4.1"); }}
class F extends C implements P
{ public void m5() {System.out.println("4.2"); }}
class Demo
{ public static void main(String args[])
{ D ob1=new D();
  ob1.m1();
  ob1.m2();
  ob1.m4();
  C ob2=new C();
  ob2.m3();
  E ob3=new E();
  ob3.m5();
  F ob4=new F();
  ob4.m5();
}
}
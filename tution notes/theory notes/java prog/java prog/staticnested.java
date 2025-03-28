class OuterClass 
{  
    // static member 
    static int outer_x = 10; 
  // instance(non-static) member 
    int outer_y = 20; 
      
    // private member 
    private static int outer_private = 30; 
      
    // inner class 
    static class StaticNested 
    { 
        void display() 
        { 
            // can access static member of outer class 
            System.out.println("outer_x = " +outer_x); 
              
            // can't access non-static member of outer class 
            //System.out.println("outer_y = " + outer_y); 
              
            // can also access private member of outer class 
            System.out.println("outer_private = " + outer_private); 
          
        } 
    } 
}
// Driver class 
class Demo 
{ 
    public static void main(String[] args) 
    { 
        // accessing member of static nested class
         OuterClass.StaticNested   obj=new OuterClass.StaticNested(); 
         OuterClass o=new OuterClass();
System.out.println(o.outer_y);
 obj.display();  
          
    } 
} 

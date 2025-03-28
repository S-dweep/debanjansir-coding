public class Sum2 { 
      // Overloaded sum(). This sum takes two int parameters 
    public int sum(int x, int y) 
    { 
        return (x + y); 
    } 
    // Overloaded sum(). This sum takes three int parameters 
    public int sum(int x, int y, int z) 
    { 
        return (x + y + z); 
    }
     public double sum(double x, double y) 
    { 
        return (x + y); 
    } 
     
    // Overloaded sum(). This sum takes two double parameters 
     
    public static void main(String args[]) 
    { 
        Sum2 s = new Sum2(); 
        System.out.println(s.sum(10, 20, 30)); 
        System.out.println(s.sum(10.20, 20.50)); 
        System.out.println(s.sum(10, 20)); 
   
    } 
}

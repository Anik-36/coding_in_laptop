package assignmentofmid;
public class Problem4 {
    public static void main(String[] args){
        // with temp variable 
        int a = 5, b = 10, temp;
        System.out.println("Before swap: a = "+a+ ", b = " +b);
        temp = a;
        a = b;
        b = temp;
        System.out.println("After swap: a = "+a+ ", b = " +b);        
        // without temp variable
        int c = 5, d = 10;
        c = c + d;
        d = c - d;
        c = c - d;
        System.out.println("After swap: c = "+c+ ", d = " +d);
    }
}
package assignmentofmid;
import java.util.Scanner;
public class Problem3 {
    public static void main(String[] args) {
    Scanner in= new Scanner(System.in);
    float c,f;
    System.out.println("Enter the celcius value of temparature : ");
    c= in.nextFloat();
    f = (float) ((1.8*c) +32);
    System.out.println("Fahrenheit ="+f);  
    System.out.println("Enter the Fahrenheit value of temparature : ");
    f= in.nextFloat();
    c = (float) (0.56*(f -32));
    System.out.println("celcius ="+c);  
    }
}

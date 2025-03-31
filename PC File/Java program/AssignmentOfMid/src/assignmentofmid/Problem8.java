package assignmentofmid;
import java.util.Scanner;
public class Problem8{
    public static void main(String[] tahsin) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a small integer : ");
        int num = sc.nextInt();
        int fact = 1;
        for(int i = 1; i <= num; i++){
            fact *= i;
        }
        System.out.println("Factorial of " + num + " is : " + fact);
        System.out.print("Enter a long integer : ");
        long n = sc.nextLong();
        long factorial = 1;
        for(long i = 1; i <= n; i++){
            factorial *= i;
        }
        System.out.println("Factorial of " + n + " is : " + factorial);
    }    
}

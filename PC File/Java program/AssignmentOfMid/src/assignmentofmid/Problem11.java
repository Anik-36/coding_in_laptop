package assignmentofmid;
import java.util.Scanner;

public class Problem11 {
    public static void main(String[] args){
        int i, n, r;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number for table: ");   
        n = sc.nextInt();   

        for(i = 1; i <= 10; i++){
            r = n * i;
         System.out.printf("%d * %d = %d\n", n, i, r);   
        }
    }
}
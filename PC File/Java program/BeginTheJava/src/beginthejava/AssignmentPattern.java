package beginthejava;
import java.util.Scanner;

public class AssignmentPattern {
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int n;
        System.out.println("Enter the an integer number : ");
        n=in.nextInt();
        for(int row=1; row<=n; row++){
            for(int col=1; col<=row; col++){
                System.out.print(" "+col%2);
            }
                System.out.println("");
        }
        
    }
}

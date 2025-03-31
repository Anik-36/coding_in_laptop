package beginthejava;

import java.util.Scanner;

public class PatternDemo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the ineger number : ");
        int n = in.nextInt();
        for(int row=1 ; row<=n; row++){
            for(int col=1 ; col<=row ; col++){
                System.out.printf(" %c",(col+64));
            }
            System.out.println("");
        }
    }
}

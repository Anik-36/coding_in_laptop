package exception;

import java.util.Scanner;

public class ProblemSolving {

    public static void main(String[] args) {
        int count=1;
        do{
            try {
            Scanner in = new Scanner(System.in);
            System.out.print("Please enter num1: ");
            int num1 = in.nextInt();
            System.out.print("Please enter num2: ");
            int num2 = in.nextInt();
            int result = num1 / num2;
            count++;
            System.out.println("Result: " + num1 + "/" + num2 + " = " + result);
        } catch (Exception a) {
            System.out.println("Exception: "+a);
            System.out.println("You must enter integer. Please try again");
        }
        }while(count==1);

    }
}

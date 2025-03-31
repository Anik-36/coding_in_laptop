package arraydemo;
import java.util.Scanner;
public class SumOfArray {
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        double[] number= new double[5];
        double sum=0, avg;
        System.out.println("enter the number you wanna sum : ");
        for(int i=0; i<number.length ; i++){
            number[i]= in.nextDouble();
        }
        for(int i=0; i<number.length; i++){
            sum= sum+number[i];
        }
        System.out.println("Sum : "+sum);
        avg= sum/number.length;
        System.out.println("Average : "+avg);
    }
}

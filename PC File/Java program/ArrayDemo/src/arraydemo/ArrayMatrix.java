package arraydemo;
import java.util.Scanner;

public class ArrayMatrix {
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int[][] A= new int[2][3];
        int[][] B= new int[2][3];
        System.out.println(" Enter the value of a matrix: ");
        for(int row=0; row<2; row++){
            for(int col=0; col<3; col++){
                System.out.printf("A[%d][%d] = ",row,col);
                A[row][col]=in.nextInt();
            }
        }
        for(int row=0; row<2; row++){
            for(int col=0; col<3; col++){
                System.out.printf("B[%d][%d] = ",row,col);
                B[row][col]=in.nextInt();
            }
        }
        
        System.out.print("A= ");
        for(int row=0; row<2; row++){
            for(int col=0; col<3; col++){
                System.out.print("\t"+A[row][col]);
            }
            System.out.println();
        }
        System.out.println();

        System.out.print("B= ");
        for(int row=0; row<2; row++){
            for(int col=0; col<3; col++){
                System.out.print("\t"+B[row][col]);
            }
            System.out.println();
        }
    }
}

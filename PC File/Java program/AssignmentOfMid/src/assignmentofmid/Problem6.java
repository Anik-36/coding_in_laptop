package assignmentofmid;
import java.util.Scanner;
public class Problem6 {
        public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Input the size of the array
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();
        int[] arr = new int[size];
        // Input the elements of the array
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < size; i++) {
            System.out.print("Number " + (i + 1) + ": ");
            arr[i] = scanner.nextInt();
        }
        // Find the largest number in the array
        int largestNumber = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > largestNumber) {
                largestNumber = arr[i];
            }
        }
        System.out.println("The largest number in the array is: " + largestNumber);
    }
}
package assignmentofmid;
public class Problem9 {
    public static void main(String[] args) {
        int rows = 5,rows2 = 5;

        // Print pattern
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        System.out.println(" ");
        // Print pattern
        for (int i = 1; i <= rows2; i++) {
            // Print spaces
            for (int j = i; j < rows2; j++) {
                System.out.print("  ");
            }
            // Print stars
            for (int k = 1; k <= i; k++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

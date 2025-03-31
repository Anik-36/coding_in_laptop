package assignmentofmid;
public class Problem13 {
    public static void main(String[] args) {
        int i = 1;
        while (i <= 10) {
            // Skip printing 5 using continue statement
            if (i == 5) {
                i++;
                continue;
            }
            System.out.print(i + " ");
            // Break the loop when i is 8
            if (i == 8) {
                break;
            }
            i++;
        }
        System.out.println("\nLoop ended.");
    }
}

package assignmentofmid;
public class Problem12 {
    public static void main(String[] args) {
        int[] numbers = {2, 7, 15, 23, 30, 37, 43};

        System.out.println("Prime numbers among the given integers are:");
        for (int number : numbers) {
            if (isPrime(number)) {
                System.out.print(number + " ");
            }
        }
    }

    public static boolean isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        if (number == 2) {
            return true;
        }
        if (number % 2 == 0) {
            return false;
        }
        // Check for prime by testing divisors up to the square root of the number
        int sqrt = (int) Math.sqrt(number);
        for (int i = 3; i <= sqrt; i += 2) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
}
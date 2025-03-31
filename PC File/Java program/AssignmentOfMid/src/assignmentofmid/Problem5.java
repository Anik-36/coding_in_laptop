package assignmentofmid;
import java.util.Scanner;
public class Problem5{
    int add(int a,int b){
        return a + b;
    }
    long add(long a,long b){
        return a + b;
    }
    public static void main(String[] tahsin) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        Problem5 sum = new Problem5();
        int small_integer = sum.add(a, b);
        System.out.println("Addition of two small integer : " + small_integer);
        long c = sc.nextLong();
        long d = sc.nextLong();
        long large_integer = sum.add(c, d);
        System.out.println("Addition of two large integer : " + large_integer);
        sc.close();
    }
}

package beginthejava;

import java.util.Scanner;

public class IsVoter {
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        int age;
        System.out.println("Ente the age number : ");
        age = input.nextInt();
        if(age>18){
            System.out.println("valid voter");
        }
        else{
            System.out.println("invalid voter");
            
        }
    }
}

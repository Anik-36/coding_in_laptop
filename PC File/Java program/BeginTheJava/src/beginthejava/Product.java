
package beginthejava;
import java.util.Scanner;

public class Product {
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        int id;
        String title,price,description,categroy;
        System.out.println("Enter the all information");
        id= input.nextInt();
        title = input.nextLine();
        price = input.nextLine();
        description = input.nextLine();
        categroy = input.nextLine();
        System.out.println("id = "+id);
        System.out.println(",title = "+title);
        System.out.println("price = "+price);
        System.out.println("description = "+description);
        System.out.println("categroy = "+categroy);
        
    }
}

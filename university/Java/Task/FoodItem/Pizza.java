public class Pizza extends FoodItem{
    String size;

    Pizza(){
        System.out.println("This is a Pizza");
    }
    Pizza(String size, double price, String name){
        System.out.println("This is a "+size+" "+name+" price : "+price);
    }
}
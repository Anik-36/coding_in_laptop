public class Burger extends FoodItem{
    int numberOfPatties;
    Burger(){
        System.out.println("This is a burger");
    }
    Burger(int numberOfPatties, double price, String name){
        System.out.println("This is a "+numberOfPatties+" patties "+name+" .price = "+price);
    }
}

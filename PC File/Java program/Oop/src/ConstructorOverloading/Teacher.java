
package ConstructorOverloading;

public class Teacher {
    String name,gender;
    int phone;
    Teacher(){
        System.out.println("No value");
    }
    Teacher(String n,String g){
        name = n;
        gender = g;
    }
    Teacher(String n , int p){
        name = n;
        phone = p;
    }
    void display(){
        System.out.println("Name = "+name);
        System.out.println("gender = "+gender);
        System.out.println("phone = "+phone);
        System.out.println();
    }
}

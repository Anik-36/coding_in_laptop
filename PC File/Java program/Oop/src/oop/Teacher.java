
package oop;

public class Teacher {
    String name,gender ;
    int phone;
    void setinfo(String n, String m, int a){
        name = n;
        gender = m;
        phone = a;
    }
    void display(){
        System.out.println("name = "+name);
        System.out.println("gender = "+gender);
        System.out.println("phone = "+phone);
        System.out.println();
    
    }
}

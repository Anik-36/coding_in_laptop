package university.Java.Mid.Practice.Student;

public class A{

    String name;
    int id;

    A(){
        System.out.println("Defualt constructor");
    }

    A(int id){
        System.out.println("Id : " + id);
    }


    // Constructor Overloading

    A(int id, String name){
        System.out.println("Name : "+name);
        System.out.println("Id : " + id);
    }

}
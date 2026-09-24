package university.Java.labFinal.FileHandling;

import java.io.*;
class Student implements Serializable {

    String name;
    int id;
    transient String cgpa;
    Student(String name, int id, String cgpa){
        this.name = name;
        this.id = id;
        this. cgpa = cgpa;
    }
    public class SerializationExample {

        public static void main(String[] args) {
            try{
                Student st1 =new Student("anik",1036,"3.57");

                FileOutputStream file =new FileOutputStream("student.txt");
                ObjectOutputStream object =new ObjectOutputStream(file);
                object.writeObject(st1);
                object.close();
                file.close();

                System.out.println("serialiation done _____________-");

                FileInputStream file1 =new FileInputStream("student.txt");
                ObjectInputStream object2 =new ObjectInputStream(file1);
                Student st2 = (Student) object2.readObject();

                object2.close();
                file1.close();

                System.out.println(st2.cgpa);
                System.out.println(st2.id);
                System.out.println(st2.name);
            }catch(Exception e){
                System.out.println(e);
            }
        }
    }

}
package polymorphism;

public class test {
    public static void main(String[] args) {
        person p= new person();
        p.name="Anisur Rahman";
        p.age= 23;
        p.displayInfo();
        person t= new teacher();
        t.name="anik";
        t.age=53;
        t.qualification= "teacher";
        t.displayInfo();
    }
}

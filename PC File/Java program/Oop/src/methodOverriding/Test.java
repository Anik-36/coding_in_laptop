package methodOverriding;

public class Test {
    public static void main(String[] args) {
        Teacher t1 = new Teacher();
        t1.name = "Md. Anisur Rahman Anik";
        t1.age = 22;
        t1.qualification= " Student";
        t1.displayInformation();
        Person p = new Person();
        p.name = "Ami ";
        p.age= 2;
        p.displayInformation();
    }
 
}

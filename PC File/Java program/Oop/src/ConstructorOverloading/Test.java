
package ConstructorOverloading;

public class Test {
    public static void main(String[] args) {
        Teacher teacher1 = new Teacher();
        teacher1.display();

        Teacher teacher2 = new Teacher("Anisur Rahman","male");
        teacher2.display();
        Teacher teacher3 = new Teacher("Anik",1403377849);
        teacher3.display();
    }
}

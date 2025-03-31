package encapsulation;

public class Test {
    public static void main(String[] args) {
        setGetMethod ob= new setGetMethod();
        ob.setName("Md.Anisur Rahman Anik");
        ob.setAge(22);
        System.out.println(ob.getName());
        System.out.println(ob.getAge());
    }
}

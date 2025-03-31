package abstraction;

public class test {
    public static void main(String[] args) {
        MobileUser mu;
        mu = new Rahim();
        mu.calling();
        mu.sendMassage();
        mu = new Karim();
        mu.calling();
        mu.sendMassage();
    }
}

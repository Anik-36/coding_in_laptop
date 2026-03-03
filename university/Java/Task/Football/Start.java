public class Start{
    public static void main(String[] args) {
        PremierLeague p1 = new PremierLeague("Messi", 1000);
        LaLigaPlayer p2 = new LaLigaPlayer("Ronaldo", 860);

        p1.setSalary(50000);
        p2.setSalary(60000);

       System.out.println("Salaray of Messi is : " +p1.getSalary());
       System.out.println("Salaray of Ronaldo is : " +p2.getSalary());
        System.out.println("Goal rate of Messi is : " +p1.calculateGoalRate(100));
        System.out.println("Goal rate of Ronaldo is : " +p2.calculateGoalRate(90));

    }
}

abstract class FootballPlayer{
    String name;
    int goals;
    private double salary;
    abstract double calculateGoalRate(int match_played);

    public void setSalary(double salary){
        this.salary = salary;
    }
    public double getSalary(){
        return this.salary;
    }
    FootballPlayer(String name, int goals){
        this.name = name;
        this.goals = goals;
    }
    public void showInfo(){
        System.out.println("Name: "+name);
        System.out.println("Goals: "+goals);
    }
}


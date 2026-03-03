public class PremierLeague extends FootballPlayer{
    @Override
    double calculateGoalRate(int match_played){
        return goals/match_played;
    }
    PremierLeague(String name, int goal){
        super(name,goal);
        System.out.println(name + " is playing in PremierLeague");
    }
}
public class LaLigaPlayer extends FootballPlayer{
    @Override
    double calculateGoalRate(int match_played){
        return goals/match_played;
    }
    LaLigaPlayer(String name, int goals){
        super(name,goals);
        System.out.println(name + " is playing in LaLiga");
    }
}
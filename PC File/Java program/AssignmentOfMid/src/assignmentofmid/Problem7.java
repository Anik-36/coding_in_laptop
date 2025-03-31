package assignmentofmid;
public class Problem7 {
    public static void main(String[] args){
        float bangla, english, math, science, biology, ict, total,avg;
        bangla = 70;
        english = 85;
        math = 90;
        science = 84;
        biology = 78;
        ict = 89;
        total = bangla + english + math + science + biology + ict;
        avg = total / 6;
        if(avg >= 80){
            System.out.println("Grade A+");
        }
        else if(avg >= 70 && avg < 80){
            System.out.println("Grade A");
        }
        else if(avg >= 60 && avg < 70){
            System.out.println("Grade A-");
        }
        else if(avg >= 50 && avg < 60){
            System.out.println("Grade B");
        }
        else if(avg >= 40 && avg < 50){
            System.out.println("Grade C");
        }
        else{
            System.out.println("Grade F");
        }
    }
}
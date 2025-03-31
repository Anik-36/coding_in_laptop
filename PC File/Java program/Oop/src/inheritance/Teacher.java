package inheritance;

public class Teacher extends Person{
    String qualification;
    void showInformation2(){
        showInformation1();
        System.out.println("Qualification = "+qualification);
    }
}

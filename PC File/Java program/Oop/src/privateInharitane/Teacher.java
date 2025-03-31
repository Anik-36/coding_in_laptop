package privateInharitane;

public class Teacher extends Person{
    private String qualification;
    public void setQualification(String qualification){
        this.qualification=qualification;
    }
    public String getQualification(){
        return qualification;
    }
    void displayInformation(){
        System.out.println("Name = "+getName());
        System.out.println("Age = "+getAge());
        System.out.println("qualification = "+getQualification());
    }
}

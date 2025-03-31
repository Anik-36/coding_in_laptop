package polymorphism;

public class teacher extends person {
    String qualification;
    @Override
    public void displayInfo(){
        super.displayInfo();
        System.out.println("Qualification = "+ qualification);
    }
}

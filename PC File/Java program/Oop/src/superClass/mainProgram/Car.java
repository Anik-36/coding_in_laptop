package superClass.mainProgram;

public class Car extends Vehicle{
    int gear;
    Car(String c,double w,int g){
        super(c,w);
        gear=g;
    }
    @Override
    void attribute(){
        super.attribute();
        System.out.println("Gear : "+gear);
    }
}

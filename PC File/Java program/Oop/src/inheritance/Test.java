package inheritance;

public class Test {
    public static void main(String[] args) {
        Teacher t1 = new Teacher();
        t1.name= "Md.Anisur Rahman Anik";
        t1.age= 22;
        t1.qualification="Bsc in C.S.E";
        t1.showInformation2();
        Teacher t2= new Teacher();
        t2.name="OI amioi";
        t2.age=2;
        t2.qualification="Motamoti Java shikhte parchi";
        t2.showInformation2();
    }
}

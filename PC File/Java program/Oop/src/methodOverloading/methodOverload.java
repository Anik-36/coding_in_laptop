package methodOverloading;

public class methodOverload {
    void add(int a, int b){
        System.out.println(a+b);
    }
    void add(double a,double b){
        System.out.println(a-b);
    }
    void add(int a, int b, int c){
        System.out.println(a+b+c);
    }
    void add(){
        System.out.println("nothing to add");
    }
}

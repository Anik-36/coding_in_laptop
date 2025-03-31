package exception;

public class ExceptionHandling {
    public static void main(String[] args) {
        try{
            int a=3;
            int b=0;
            int result =a/b;
            System.out.println("result : "+result);
            
        }catch(ArithmeticException b){
            System.out.println(b);
        }catch(ArrayIndexOutOfBoundsException c){
            System.out.println(c);
        }catch(NullPointerException n){
            System.out.println(n);
        }catch(StringIndexOutOfBoundsException s){
            System.out.println(s);
        }catch(NumberFormatException f){
            System.out.println(f);
        }catch(Exception a){
            System.out.println("a");
        }
        finally{
            System.out.println("last line of the program");
        }
    }
}

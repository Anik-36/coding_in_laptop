package university.Java.Task.Bank_account;

public class Bank  {
    private String name;
    SavingsAccount sa;
    FixedAccount fa;
    Bank(){
        this.name = "";
    }
    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return this.name;
    }

}

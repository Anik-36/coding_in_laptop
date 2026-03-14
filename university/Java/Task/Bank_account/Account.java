package university.Java.Task.Bank_account;

public class Account{
    private String accountNumber;
    private String accountHolderName;
    private double balance;

    Account(){
        this.accountNumber = "";
        this.accountHolderName = "";
        this.balance = 0;
    }
    public void setAccountNumber(String accountNumber){
        this.accountNumber = accountNumber;
    }
    public void setAccountHolderName(String accountHolderName){
        this.accountHolderName = accountHolderName;
    }
    public void setbalance(double balance){
        this.balance = balance;
    }
    public String getAccounNumber(){
        return this.accountNumber;
    } public String getAccounHolderName(){
        return this.accountHolderName;
    } public double getBalance(){
        return this.balance;
    }
    public void depositeMoney(double amount){

    }
    public void withdrawMoney(double amount){

    }
}
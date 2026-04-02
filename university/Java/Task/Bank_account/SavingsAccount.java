package university.Java.Task.Bank_account;

abstract class SavingsAccount extends Account {
    private double interestRate;
    SavingsAccount(){
        super();
        this.interestRate = 0;
    }
    public void setInterestRate(double interestRate){
        this.interestRate = interestRate;
    }
    public double getInterestRate(){
        return this.interestRate;
    }
}

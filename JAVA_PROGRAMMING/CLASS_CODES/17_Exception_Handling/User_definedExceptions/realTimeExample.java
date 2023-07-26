

// real time example of user-defined exception

import java.util.*;

class BankBalanceException extends RuntimeException {
    BankBalanceException(String msg){
        super(msg);
    }
}

class user{
    public static void main(String[] args) {

        int currentBalance =  1500;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter amount to pay : ");
        int amount = sc.nextInt();

        if(amount > currentBalance){
            throw new BankBalanceException("Insufficient balance : " );
        }else{
            System.out.println("Payment successfull....");
        }
        
    }
}
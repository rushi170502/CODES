
// User-defined Exception in java

import java.util.*;

class Demo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        try{
            if(x == 0){
                throw new ArithmeticException("Divide by zero");
                
            }
            System.out.println(10/x);
        }catch(ArithmeticException ae){
            System.out.print("Exception in Thread ' "+Thread.currentThread().getName()+ " '  ");
            ae.printStackTrace();
        }
        
       
      
    }
}
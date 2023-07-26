
// Try -catch block

import java.util.InputMismatchException;
import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the data : ");
        try{
            int data = sc.nextInt();
            System.out.println(data);

        }catch(InputMismatchException obj){ 

            System.out.println("InputMismatchException occurs");

        }catch(NumberFormatException nf){

            System.out.println("NumberFormatException occurs");
        
        }

        sc.close();
    }
}

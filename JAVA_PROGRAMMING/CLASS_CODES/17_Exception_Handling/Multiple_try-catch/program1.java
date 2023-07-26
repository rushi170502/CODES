

// Try -catch block
import java.io.IOException;
import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the data : ");
        try{
            int data = sc.nextInt();
            System.out.println(data);

        }catch(IOException obj){ // IOException never thrown so we cannot write it.

        }catch(NumberFormatException nf){
        
        }
    }
}

/*error: exception IOException is never thrown in body of corresponding try statement
        }catch(IOException obj){ // IOException never thrown so we cannot write it.
         ^
1 error */
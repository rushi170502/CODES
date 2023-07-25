
// NumberFormatException handle using try-catch block

import java.io.*;

class Demo{
    void m1() throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int data = 0;
        // risky code
        try{
                System.out.println("Enter Integer data :");
                data = Integer.parseInt(br.readLine());
                System.out.println(data);
        } catch (NumberFormatException e) { // handling code
                System.out.println(" please Enter Integer data :");
                data = Integer.parseInt(br.readLine());
                System.out.println(data);
        }

    }
}

class client{
    public static void main(String[] args) throws IOException {  
        
        Demo obj = new Demo();

        obj.m1();
    }
}

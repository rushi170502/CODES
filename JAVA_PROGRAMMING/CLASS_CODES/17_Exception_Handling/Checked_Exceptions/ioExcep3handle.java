
// IOException handle using try-catch block

import java.io.*;

class client{
    public static void main(String[] args) throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       
        System.out.println("Enter data : ");
        int data1 = Integer.parseInt(br.readLine());
        System.out.println(data1);
    
        br.close(); // connection closed

        try{
            System.out.println("Enter data : ");
            int data = Integer.parseInt(br.readLine());
            System.out.println(data);

        }catch(IOException io){
                        
            BufferedReader br1  = new BufferedReader(new InputStreamReader(System.in)); 
            System.out.println("Enter data : ");
            int val = Integer.parseInt(br1.readLine());
            System.out.println(val);
        }
        
    }

}   
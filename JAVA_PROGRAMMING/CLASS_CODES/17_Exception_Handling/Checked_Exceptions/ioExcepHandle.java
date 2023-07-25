


// IOException in java handle using try - catch block

import java.io.*;

class client{
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int data = 0;
        try{

            System.out.println("Enter data : ");
            data = Integer.parseInt(br.readLine());

        }catch(IOException io){
            

        }

        System.out.println(data);
        
    }

}


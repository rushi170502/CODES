

// IOException in java

import java.io.*;

class client{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter data : ");
        int data = Integer.parseInt(br.readLine());

        System.out.println(data);
        
    }

}

// Note : BufferedReader readLine() throws IOException

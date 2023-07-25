
// IOException in java

import java.io.*;

class client{
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter data : ");
        int data = Integer.parseInt(br.readLine());

        System.out.println(data);
        
    }

}

/* .\IOexception.java:10: error: unreported exception IOException; must be caught or declared to be thrown
        int data = Integer.parseInt(br.readLine());
                                               ^   
1 error

*/
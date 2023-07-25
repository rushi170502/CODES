

import java.io.*;

class client{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter data : ");
        int data1 = Integer.parseInt(br.readLine());
        System.out.println(data1);
        

        br.close(); // connection closed

        System.out.println("Enter data : ");
        int data = Integer.parseInt(br.readLine());
        System.out.println(data);
        
    }

}

/*Exception in thread "main" java.io.IOException: Stream closed
        at java.base/java.io.BufferedReader.ensureOpen(BufferedReader.java:123)
        at java.base/java.io.BufferedReader.readLine(BufferedReader.java:321)  
        at java.base/java.io.BufferedReader.readLine(BufferedReader.java:396)  
        at client.main(ioExcep2.java:16) */
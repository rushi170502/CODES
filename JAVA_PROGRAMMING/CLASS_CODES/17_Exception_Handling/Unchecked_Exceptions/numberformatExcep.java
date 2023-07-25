
// NumberFormatException 

import java.io.*;

class Demo{
    void m1()throws IOException{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter Integer data :");
        int data = Integer.parseInt(br.readLine());

        System.out.println(data);

    }
}

class client{
    public static void main(String[] args) throws IOException {
        
        Demo obj = new Demo();

        obj.m1();
    }
}
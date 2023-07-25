
// InputMissMatchException

import java.util.*;

class Demo{

    void m1(){
        System.out.println("In m1");

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter data");
        int data = sc.nextInt();

        System.out.println(data);
        sc.close();

    }


}

class client{
    public static void main(String[] args) {
        
        Demo obj = new Demo();

        obj.m1();
    }
}
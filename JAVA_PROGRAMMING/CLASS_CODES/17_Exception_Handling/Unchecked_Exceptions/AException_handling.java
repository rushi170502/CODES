
// we handle exception using try- catch block

class Demo1{
    void m1(){
        System.out.println("In m1");
    }

    void m2(){
        System.out.println("In m2");

        // risky code in try block
        try{
            System.out.println(10/0);

        }catch(ArithmeticException ae){ // handling code in catch block
            System.out.println(10/2);
        }

        m1();
    }
}

class client1 {
    public static void main(String[] args) {

        System.out.println("Start Main");
        Demo1 obj = new Demo1();
        obj.m2();

        System.out.println("End Main");

    }
}
// by using try -catch block we can achieve normal termination of program


class Demo{
    void method1(){
        System.out.println("In method -1");
    }

    void m2(){
        System.out.println(10/0);
        System.out.println("In method -2");
    }
}

class client{
    public static void main(String[] args) {

        System.out.println("Start Main");
        Demo obj = new Demo();
        obj.m2();
        System.out.println("End Main");
    }
}

// Exception occur : Unchecked Exception caught by default handler exception

/* Start Main
     Exception in thread "main" java.lang.ArithmeticException: / by zero
        at Demo.m2(ArithmeticException.java:9)
        at client.main(ArithmeticException.java:19)

        */
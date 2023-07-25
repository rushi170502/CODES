

// We can print exception like Default Exception handler in java
// by using Exception class methods

class Demo {

    void m1(){
        System.out.println("In m1 method");
    }

    void m2(int x){
        System.out.println("In m2 method");
        // risky code
        try{
            System.out.println(10/x);
        }catch(ArithmeticException e){
            System.out.print("Exception in Thread ' " +Thread.currentThread().getName() + " ' ");
            e.printStackTrace();
        }
        m1();
    }
}

class client{
    public static void main(String[] args) {
        Demo obj = new Demo();
        obj.m2(0);
    }
}

// In this code we can print exception like default exception handler
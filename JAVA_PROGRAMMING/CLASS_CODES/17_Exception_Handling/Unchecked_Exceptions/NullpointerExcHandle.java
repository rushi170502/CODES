



// NullPointerException hadling using try - catch block

class Demo{
    void m1(){
        System.out.println("M1 method");
    }

    void m2(){
        System.out.println("M2 method");
    }
}

class client{
    public static void main(String[] args) {

        System.out.println("Start main");
        
        Demo obj = new Demo();

        obj.m1();

        obj = null;

        // risky code
        try{
             obj.m2();

        }catch(NullPointerException ex){
            obj = new Demo();
            obj.m2();
        }
        System.out.println("End main");


    }   
}
// NullPointerException occurs  due to well assign null to object and access with that object other methods
// and handle exception appropriately by assigning new object to obj

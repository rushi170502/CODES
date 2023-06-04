

// static things in inheritance parent-child relation

class Parent {
    static int x = 10;
    static int y = 20;

    static{
        System.out.println("Parent static block");
    }

     static void access(){
        System.out.println("static access method");
        System.out.println(x);
        System.out.println(y);

    }

}

class child extends Parent{
    static{
        System.out.println("Child static block");
        System.out.println(x);
        System.out.println(y);
        access();
    }

   
}

class client{

    public static void main(String[] args) {
        
        System.out.println("In main");
        
        child obj = new child();

        System.out.println("End main");

    }
}
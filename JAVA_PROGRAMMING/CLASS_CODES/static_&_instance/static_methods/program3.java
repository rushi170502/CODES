




// program of static methods

class Demo{

    static int x = 20;
    static int y = 40;

    static void disp(){
        // both are static 
        System.out.println(x);
        System.out.println(y);
    }
}

class client{
    public static void main(String[] args) {
    
        // static method access using class name
        Demo.disp();

        System.out.println(Demo.x);
        System.out.println(Demo.y);
    }
}
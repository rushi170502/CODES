


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
       
       
        Demo obj = new Demo();
        // static method access using object 
        obj.disp();

        System.out.println(obj.x);
        System.out.println(obj.y);
    }
}
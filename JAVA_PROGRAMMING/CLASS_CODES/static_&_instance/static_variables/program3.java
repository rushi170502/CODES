
// static variables 

class Demo{

    static int x = 10;
    static int y = 20;

    void disp(){
        System.out.println(x);
        System.out.println(y);
    }
}

class client{
    public static void main(String[] args) {

        // we can access static variables using object 
        Demo obj = new Demo(); 

        System.out.println(obj.x);
        System.out.println(obj.y);

        // accessing static variables using class name

        System.out.println(Demo.x);
        System.out.println(Demo.y);

    }
}
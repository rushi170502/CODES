

class Demo{
    
    static int x = 10;

    // static block
    static {
        static int y = 20;
    }

    // non- static method 
    void fun(){
        static b = 300;
    }

    // static method
    static void gun(){
        static z = 40;
        int a = 100;
    }


}

// error : we cannot allowed to write static things in static block
// also we cannot use static things in non static block
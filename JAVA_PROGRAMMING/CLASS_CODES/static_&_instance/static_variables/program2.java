

class Demo{

    int x = 10;
    private int y = 20;
    static int z = 30;

    void info(){
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
    }

}

class user{
    public static void main(String[] args) {
        
        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        obj1.info();
        obj2.info();

        obj1.x = 100;
      //  obj1.y =  1000 ; // y has private access in Demo class
        obj1.z = 300;

        obj1.info();
        obj2.info();


    }
}
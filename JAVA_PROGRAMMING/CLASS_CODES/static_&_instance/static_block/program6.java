
class Demo{
    static int num = 100;

    static {
        System.out.println("Static block - 1");
    }
    void fun(){
        int a = 100;
        System.out.println(a);
    }

    static void gun(){
        System.out.println("static method gun");
    }
}

class client{
    public static void main(String[] args) {
        Demo obj = new Demo();
        obj.fun();

        Demo.gun();// access by the class name
    }
}
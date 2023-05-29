
class Demo{

    int x = 10;
    static int y = 20;

    static {
        System.out.println("Static block -1 ");
    }

    public static void main(String[] args) {
        System.out.println("Main method");

        Demo obj = new Demo();

        System.out.println(obj.x);
        System.out.println(Demo.y); // access by class name
    }

    static {
        System.out.println("Static block - 2");
        System.out.println(y);
        //System.out.println(x); // we cannot use non-static variables in static blocks
    }
}
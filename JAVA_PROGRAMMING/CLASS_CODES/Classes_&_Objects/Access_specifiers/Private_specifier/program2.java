
class C2W{
    int x = 10;
    private int y = 20;

    void fun(){
        System.out.println(x);
        System.out.println(y);
    }
}

class demo{
    public static void main(String[] args) {
        C2W obj = new C2W();

        obj.fun();

        System.out.println(obj.x);
        // System.out.println(obj.y); // error  :  private access in C2W class

        //System.out.println(x); // cannot find symbol

        //System.out.println(y); // cannot find symbol
    }
}
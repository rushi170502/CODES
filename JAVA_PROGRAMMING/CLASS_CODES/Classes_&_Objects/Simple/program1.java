
class Demo{
    int x = 10;
    int y = 20;

    void disp(){
        System.out.println(x);
        System.out.println(y);
    }

    public static void main(String[] args) {
        Demo obj = new Demo();
        System.out.println(obj.x);
        System.out.println(obj.y);
        obj.disp();
    }   
}
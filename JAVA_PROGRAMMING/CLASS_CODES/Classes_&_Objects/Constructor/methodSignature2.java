
class Demo{
    Demo(){
        System.out.println("In no-args constructor");
    }

    Demo(float x){
        System.out.println("In para- constructor");
    }

    void fun(){
        System.out.println("In fun");
    }

    void fun2(){
        System.out.println("In fun2");
    }

    public static void main(String[] args) {
        Demo obj = new Demo();
        Demo obj2 = new Demo(100);

        obj.fun();
        obj.fun2();
    }
}


class Demo{

    // no argument constructor
    Demo(){
        System.out.println("In no-args constructor");
    }
    //parameterized constructor
    Demo(int x){
        System.out.println("Parameterized constructor");
    }

    // parameterized constructor
    Demo(Demo xyz){
        System.out.println("parameter Demo");
    }

    public static void main(String[] args) {
        Demo obj = new Demo();
        Demo obj1 = new Demo(10);
        Demo obj2 = new Demo(obj1);

        System.out.println(obj);
        System.out.println(obj1);
        System.out.println(obj2);
    }

}
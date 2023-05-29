


class Demo{

    int x = 100; // instance variables

    void fun(){ // instance methods

        int y = 200;

        System.out.println(x);
        System.out.println(y);
    }
}

class user{

    public static void main(String[] args) {
        Demo obj = new Demo();

        obj.fun();
        System.out.println(obj.x);
        // System.out.println(obj.y); // y is local variable of fun() so cannot access
    }
}


class Parent{
    Parent(){
        System.out.println("In Parent constructor");
    }

    void fun(int x){
        System.out.println("In parent fun");
    }
}

class child extends Parent{

    child(){
        System.out.println("In child constructor");
    }

    void fun(){
        System.out.println("In child fun");
    }

}

class client{
    public static void main(String[] args) {
        Parent obj = new child();

        obj.fun();
    }
}

// error: method fun in class Parent cannot be applied to given types;
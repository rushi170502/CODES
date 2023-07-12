


class Parent{
    Parent(){
        System.out.println("In Parent constructor");
    }

    void fun(){
        System.out.println("In Parent fun");
    }


}

class child extends Parent{
    child(){
        System.out.println("In Child constructor");
    }

    void fun(){
        System.out.println("In child fun");
    }

    void gun(){
        System.out.println("In child gun");
    }
}

class client{
    public static void main(String[] args) {
        Parent obj1 = new child();// parent child relation 

        obj1.fun();

        obj1.gun();
    }
}

// error for gun() method because at compile time compiler checks the method table of parent and it not found gun()
// method so it gives error cannot find symbol
// In overriding concept return type will affect.
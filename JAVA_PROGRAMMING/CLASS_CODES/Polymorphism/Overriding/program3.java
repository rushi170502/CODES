

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
        child obj1 = new child();

        obj1.fun();

        obj1.gun();
    }
}

// No error: child object can access both parent methods as well as itself methods 
// In overriding concept return type will affect.
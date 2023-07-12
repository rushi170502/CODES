
// two classes have same methods

class Parent {
    void fun(){
        System.out.println("In Parent's fun");
    }
}

class child extends Parent {
    void fun(){
        System.out.println("In Child's fun");
    }
}

class client{
    public static void main(String[] args) {
        Parent obj = new child();

        obj.fun();
    }
}

// No error :  child class method have greater priority than parent class method
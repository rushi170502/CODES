
// parent child relation..

class Parent{

  int x = 10;
    Parent(){
        System.out.println("In Parent constructor"); 
    }
    void access(){
        System.out.println("In Parent access Method");
    }
}

class child extends Parent{

    int y = 20;
    child(){
        System.out.println("In Child constructor");
        System.out.println(x);
        System.out.println(y);

    }
}

class client {
    public static void main(String[] args) {

        child obj = new child();
        obj.access();
    }
}
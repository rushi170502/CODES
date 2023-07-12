

class parent{
    parent(){
        System.out.println("In Parent constructor");
    }

    void fun(){
        System.out.println("in Parent's fun method");
    }
}

class child extends parent{
    child(){
        System.out.println("In Child constructor");
    }

    void fun(int x){
        System.out.println("In child's fun method");
    }
}

class client{
    public static void main(String[] args) {
        parent obj = new child();

        obj.fun();

        //obj.fun(10); // This line has error because parent class does not have fun(int) method
    }
}


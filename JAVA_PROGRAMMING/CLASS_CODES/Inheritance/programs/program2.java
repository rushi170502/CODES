

// static block in inheritance

class Parent{
    static{
        System.out.println("In Parent's static block");
    }
}

class child extends Parent{
    static{
        System.out.println("In Child's static block");
    }
}

class  client{

    public static void main(String[] args) {
        
        child obj = new child();
         
    }

}


// static block in inheritance

class Parent{
    static{
        System.out.println("In Parent's static block");
    }

    static {
        System.out.println("In Parent's static block - 2");
    }
}

class child extends Parent{
    static{
        System.out.println("In Child's static block");
    }
    
    static{
        System.out.println("In Child's static block  - 2 ");
    }
}

class  client{

    public static void main(String[] args) {
        
        child obj = new child();
         
    }

}
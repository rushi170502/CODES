
// class 

class client{
    static {
        System.out.println("Static block in client class ");
    }
}

class Demo{

    static {
        System.out.println("Static block-1 in Demo class ");
    }
    public static void main(String[] args) {

        System.out.println("In Main method");
        client obj = new client();
        
    }

    static {
        System.out.println("Static block-2 in Demo class ");
    }
}
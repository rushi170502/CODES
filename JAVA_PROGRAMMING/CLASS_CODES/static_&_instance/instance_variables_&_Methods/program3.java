

class Demo{

    Demo(){
        System.out.println("In constructor ");
    }

    static{
        System.out.println("static block -1");
    }

    {
        System.out.println("Instance block -1");
    }

    public static void main(String[] args) {
        Demo obj = new Demo();
        System.out.println("In main");

    }

    static{
        System.out.println("static block - 2");
    }

    {
        System.out.println("Instance block - 2");
    }
}
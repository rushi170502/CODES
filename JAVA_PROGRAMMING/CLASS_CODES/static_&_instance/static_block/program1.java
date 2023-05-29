
// program for static block

class Demo{

    static{
        System.out.println("In static block");
    }

    public static void main(String[] args) {
        System.out.println("In main Method");
    }
}
// static block is always come ahead of main method thats why o/p is statib block and then main block
// static block is call at the time of compilation step
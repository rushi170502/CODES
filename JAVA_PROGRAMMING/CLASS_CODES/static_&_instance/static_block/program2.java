

// program for  multiple static block

class Demo{

    static{
        System.out.println("In static block -1");
    }

    static{
        System.out.println("In static block -2");
    }

    public static void main(String[] args) {
        System.out.println("In main Method");
    }

    static{
        System.out.println("In static block -3");
    }
}
// multiple SB are called by sequence they occur  
//static block is always come ahead of main method thats why o/p is statib block and then main block
// static block is call at the time of compilation step
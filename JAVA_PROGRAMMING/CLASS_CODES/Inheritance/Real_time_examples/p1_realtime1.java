
// Inheritance for two classes parent and child classes
// Eg :  1. Realtime example
// example of Cricket board :

class ICC{
    ICC(){
        System.out.println("In ICC constructor");
    }
}

// child class inherit parent class properties
class BCCI extends ICC{
    BCCI(){
        System.out.println("In BCCI constructor");
    }
}

class client{
    public static void main(String[] args) {
        BCCI obj = new BCCI();// creating class of child class


    }
}

/*
 * o/p: In ICC constructor(due to invokespecial)
 *      In BCCI constructor
 */

// Abstract method & classes

abstract class Parent{

    void career(){
        System.out.println("Engineering job...");
    }
    abstract void marry(); // compiler make it   : public abstract void marry();
}

class child extends Parent{

    public void marry(){ // we need to take care of scope of method 
        System.out.println("Disha Patni");
    }

}

class Solution{
    public static void main(String[] args) {

        Parent p = new child();

        p.marry();
        
    }
}
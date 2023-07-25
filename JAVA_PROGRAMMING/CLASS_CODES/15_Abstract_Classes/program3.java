

// Abstract class in java

abstract class Parent {
        void property(){
            System.out.println("Flat property, car, Gold");
        }

        abstract void marry();

}

 abstract class child1 extends Parent{
    void child1Property(){
        System.out.println("Car, bikes, Land");
    }
    
}
class child2 extends Parent{
    void childProperty(){
        System.out.println("Car, bikes, Land");
    }

    void marry(){
        System.out.println("Alia bhatt..");
    }
    
}

class Client {
    public static void main(String[] args) {
       
       /*
        Parent obj = new child2();
        obj.property();
        //obj.child1Property() // error : this method is not present in parent class and compiler checks it
        obj.marry();

        */
        child2 c1 = new child2();
        c1.childProperty();
        c1.marry();
        c1.property();

    }
}
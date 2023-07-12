
// Concept of overriding in Java

class Parent{
    Parent(){
        System.out.println("In Parent constructor");
    }

    void property(){
        System.out.println("Flat, car , plot, gold etc");
    }

    void marry(){
        System.out.println("Alia bhatt");
    }
}

class child extends Parent{
    child(){
        System.out.println("In child constructor");
    }
    // overriden method child not agree with parent method so it override that method.

    void marry(){
        System.out.println("Deepika padukone");
    }

}

class client{
    public static void main(String[] args) {
        child obj = new child();

        obj.property();

        obj. marry();

    }
}


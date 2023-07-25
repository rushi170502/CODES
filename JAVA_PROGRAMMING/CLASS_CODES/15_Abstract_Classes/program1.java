

// abstract classes

abstract class parent{ // if one method is defined as abstract then class also defined as abstract
    void career(){
        System.out.println("Doctor ");
    }

    // abstract method 

    abstract void marry();

}

class child extends parent{ // child class compulsory need to give body to abstract method.
                            //  if not then itself defined as abstract class

    void marry(){
        System.out.println("Alia bhatt");
    }
}

class Solution {
    public static void main(String[] args) {
        parent obj = new child();

        obj.marry();
        obj.career();
    }
}


class Demo{
    Demo(){
        System.out.println("In constructor -1");

    }
    Demo(){
        System.out.println("In constructo -2");
    }
}

/*
 * error: constructor Demo() is already defined in class Demo
    Demo(){
        Error because of Method signature of both methods/constructor are same 
        method signature are store in Method table
        compiler is responsible for maintaining the method signatures
        */



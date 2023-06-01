


// Hidden this reference

class Demo{

    int x = 10;
    Demo(){ //Demo (Demo this)
        System.out.println("In constructor");
        System.out.println(this);// hidden this reference 
    }

    public static void main(String[] args) {
        Demo obj = new Demo();
        System.out.println(obj);
        obj.fun();
    }

    void fun(){
        System.out.println(this);
    }
}
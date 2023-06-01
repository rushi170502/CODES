
// Hidden this reference

class Demo{

    int x = 10;
    Demo(){ //Demo (Demo this)
        System.out.println("In constructor");
        System.out.println(x);// sop(this.x)
    }

    public static void main(String[] args) {
        Demo obj = new Demo();

        obj.fun();
    }

    void fun(){
        System.out.println(x);// internally goes as  : (this.x)
    }
}
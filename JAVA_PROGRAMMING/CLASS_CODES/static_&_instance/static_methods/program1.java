

// program of static methods

class Demo{

    int x = 20;
    int y = 40;

    static void disp(){
        // both have error : cannot use non-static variables in static context
        System.out.println(x);
        System.out.println(y);
    }
}
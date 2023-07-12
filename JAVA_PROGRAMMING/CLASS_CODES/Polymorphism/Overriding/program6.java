

class Parent{
    void fun(){

    }
}

class child extends Parent{
    void fun(int x){

    }
}

class client{
    public static void main(String[] args) {
        Parent obj = new child();

        obj.fun();
    }
}

// No error :  Because compiler finds fun( ) methhod into the parent's method table,
// but at runtime it runs child fun() method
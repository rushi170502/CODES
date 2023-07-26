

// Creating a Thread using Runnable interface and use join() method

class Sample implements Runnable {

    void fun(){
        System.out.println("In fun method");
    }

     void gun(){
        System.out.println("In gun method");
    }

    public void run(){
        System.out.println("In sample run");
        System.out.println("Sample : "+ Thread.currentThread().getName());
        fun();
        gun();
    }
    
}

class MyThread extends Sample implements Runnable {

    public void run(){ // compulsory need to override this method

        System.out.println("In run");
        System.out.println("MyThread : "+ Thread.currentThread().getName());

        Thread t = new Thread(new Sample());
        t.start();

        try{
            t.join();
        }catch(InterruptedException ie){

        }

        fun();
        gun();    
    
    }
}

class Demo{
    public static void main(String[] args) {
        
        System.out.println("start Main");
        
        // create a thread
        MyThread obj = new MyThread();
        Thread t = new Thread(obj); // call to Thread(Runnable obj );

        t.start();
        try{
            t.join();
        }catch (InterruptedException ie){

        }
        System.out.println("Main : "+Thread.currentThread().getName());
        System.out.println("End Main");


    }
}
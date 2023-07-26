
// Creating a Thread using Runnable interface and use join() method

class Sample {
    void fun(){
        System.out.println("In fun method");
    }

     void gun(){
        System.out.println("In gun method");
    }
}

class MyThread extends Sample implements Runnable {

    public void run(){ // compulsory need to override this method

        System.out.println("In run");
        System.out.println(Thread.currentThread().getName());

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
        System.out.println(Thread.currentThread().getName());
        System.out.println("End Main");


    }
}
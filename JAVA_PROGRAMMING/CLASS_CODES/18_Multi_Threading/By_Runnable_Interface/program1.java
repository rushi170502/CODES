

// Creating a Thread using Runnable interface

class MyThread implements Runnable {

    public void run(){ // compulsory need to override this method

        System.out.println("In run");
        System.out.println(Thread.currentThread().getName());
    }
}

class Demo{
    public static void main(String[] args) {
        
        // create a thread

        MyThread obj = new MyThread();

        Thread t = new Thread(obj); // call to Thread(Runnable obj );

        t.start();

        System.out.println("In Main");
        System.out.println(Thread.currentThread().getName());
    }
}


// we cannot start thread if it is already in any state
// Creating a Thread using Runnable interface

class MyThread implements Runnable {

    public void run(){ // compulsory need to override this method

        System.out.println("In run");
        System.out.println(Thread.currentThread().getName());
    }
}

class Demo{
    public static void main(String[] args) throws InterruptedException{
        
        // create a thread

        MyThread obj = new MyThread();

        Thread t = new Thread(obj); // call to Thread(Runnable obj );

        t.start();

        t.join();

        t.start();

        System.out.println("In Main");
        System.out.println(Thread.currentThread().getName());

    }
}

/*   Note  :  We cannot change state of thread
 * Exception in thread "main" java.lang.IllegalThreadStateException
        at java.base/java.lang.Thread.start(Thread.java:793)    
        at Demo.main(program10.java:28)
 */
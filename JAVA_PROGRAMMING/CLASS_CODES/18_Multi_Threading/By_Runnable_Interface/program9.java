

// Creating a Thread using Runnable interface and getPriority() method & setPriority() method
// setPriority() throws RuntimeException called as IllegalArgumentException

class MyThread implements Runnable {

    public void run(){ // compulsory need to override this method

        System.out.println("In run");
        System.out.println( "New Thread  : "+Thread.currentThread());
        System.out.println( "New thread priority  :  "+ Thread.currentThread().getPriority());

        System.out.println("After setting priority: ");
        try{
             Thread.currentThread().setPriority(17);
        }catch(IllegalArgumentException obj){

            Thread.currentThread().setPriority(10);// we set priority to 10 if exception occured
        }
        System.out.println("New thread priority:  "+Thread.currentThread().getPriority());


    }
}

class Demo{
    public static void main(String[] args) {
        
        // create a thread

        MyThread obj = new MyThread();

        Thread t = new Thread(obj); // call to Thread(Runnable obj );

        t.start();
        try{
            t.join();
        }catch (InterruptedException ie){

        }

        System.out.println("In Main");
        System.out.println( "Main  : "+ Thread.currentThread());
        System.out.println("Main thread priority:  "+Thread.currentThread().getPriority());

        System.out.println("After setting priority: ");
       try{
             Thread.currentThread().setPriority(-11);
        }catch(IllegalArgumentException obj1){

            Thread.currentThread().setPriority(1); // we set priority to 0if exception occur
        }
        System.out.println("Main thread priority:  "+Thread.currentThread().getPriority());



    }
}
/*  RuntimeException  called as IllegalArgumentException :
    where we cannot set priority greater than 10 and less than 0 otherwise throws exception
    we set priority to 10 and 1
    by default priority of thread is  :  5 ( priority of parent)
    Max priority :  10
    Normal priority : 5
    min priority : 1
 */
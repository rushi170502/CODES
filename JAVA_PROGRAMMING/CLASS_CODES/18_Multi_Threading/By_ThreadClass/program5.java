

// We cannot override start() method of Thread class beacuse
// It is able to create a new Thread

class MyThread extends Thread {

    public void run() {
        System.out.println(Thread.currentThread().getId());
        System.out.println(Thread.currentThread().getName());

        System.out.println("In run");
    }

    public void start(){
        System.out.println("In my start thread");
        run();
    }
}

class Demo{

    public static void main(String[] args) {
        
        // creating new thread
        MyThread obj1 = new MyThread();
        obj1.start();

        System.out.println(Thread.currentThread().getId());
        System.out.println(Thread.currentThread().getName());
    }
}

/* There is no error in code but we actually not created so protocol is not to override start method
 * all operation are done by main thread
 */
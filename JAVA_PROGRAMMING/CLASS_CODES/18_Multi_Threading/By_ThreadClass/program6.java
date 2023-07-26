
// getId() and getName()  methods are used..

class MyThread extends Thread {

    public void run() {
        System.out.println(Thread.currentThread().getId());
        System.out.println(Thread.currentThread().getName());

        System.out.println("In run");
    }
}

class Demo{

    public static void main(String[] args) throws InterruptedException {
        
        // creating new thread
        MyThread obj1 = new MyThread();
        obj1.start();

        System.out.println(Thread.currentThread().getId());
        System.out.println(Thread.currentThread().getName());

        System.out.println(Thread.activeCount());

        Thread.sleep(2000);
        MyThread obj2 = new MyThread();
        obj2.start();

        MyThread obj3 = new MyThread();
        obj3.start();

        System.out.println(Thread.activeCount());
    }
}


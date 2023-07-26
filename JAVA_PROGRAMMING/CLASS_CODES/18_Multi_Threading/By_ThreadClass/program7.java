

// Create threads for multiple classes

class DemoThread extends Thread {

     public void run(){
        System.out.println(Thread.currentThread().getName());
        System.out.println("In demo thread  " + Thread.activeCount());
     }
}

class MyThread extends Thread {

     public void run(){
        

        DemoThread obj = new DemoThread();
        obj.start();

        System.out.println(Thread.currentThread().getName());
     }
}


class Demo {
    public static void main(String[] args)  {
        
        System.out.println(Thread.currentThread().getName());

        MyThread obj = new MyThread();
        obj.start();

        
        System.out.println(" main "+ Thread.activeCount());
    }
}
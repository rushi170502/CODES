
// to print the name of Threads present in code
// by using getName() method of Thread class
//
class MyThread extends Thread {

    void fun(){
        System.out.println(Thread.currentThread().getName());
    }

    public void run(){
        fun();
    }
}

class Demo{
    public static void main(String[] args) {
        
        MyThread t1 = new MyThread();
        t1.start();

        System.out.println(Thread.currentThread().getName());

         MyThread t2 = new MyThread();
        t2.start();

    }
}
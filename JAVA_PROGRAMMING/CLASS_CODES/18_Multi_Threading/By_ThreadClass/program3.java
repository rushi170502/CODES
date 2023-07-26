
// use sleep() method of Thread class and throws Exception

class MyThread extends Thread {

    public void run(){
        for(int i = 0; i < 10; i++){
            System.out.println("In new Thread");
        }
    }
}

class Demo{
    public static void main(String[] args) throws InterruptedException {
        MyThread t1 = new MyThread();
        t1.start();

        Thread.sleep(100); // sleep main thread for 100 milliseconds

        for(int i = 0; i < 10; i++){
            System.out.println("In Main Thread");
        }
    }
}
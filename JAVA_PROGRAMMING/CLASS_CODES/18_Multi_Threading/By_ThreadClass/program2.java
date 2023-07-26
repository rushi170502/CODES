

// use sleep() method of Thread class

class MyThread extends Thread {

    public void run(){
        for(int i = 0; i < 10; i++){
            System.out.println("In new Thread");
        }
    }
}

class Demo{
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();

        Thread.sleep(1000);

        for(int i = 0; i < 10; i++){
            System.out.println("In Main Thread");
        }
    }
}

// error : Sleep() method  of Thread class thorws an InterruptedException(CompileTimeException)
/*unreported exception InterruptedException; must be caught or declared to be thrown
        Thread.sleep(1000); */
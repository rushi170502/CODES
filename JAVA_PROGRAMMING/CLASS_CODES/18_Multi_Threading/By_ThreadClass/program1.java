
// creating a new Thread using Thread class

class MyThread extends Thread {
    // run method compulsory need to override
    public void run(){
        for(int i = 0; i < 10; i++){
            System.out.println("In New Thread");
        }
    }
}

class Demo{
    public static void main(String[] args) {
        MyThread obj = new MyThread();
        obj.start();

        for(int i = 0; i < 10; i++){
            System.out.println("In main thread");
        }
    }
}
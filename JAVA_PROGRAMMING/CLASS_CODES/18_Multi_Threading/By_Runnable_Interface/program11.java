

// Use sleep() method which has two parameters

class MyThread implements Runnable {
  public void run(){
    System.out.println("In MyThread run");
  }
}

class Demo{
    public static void main(String[] args) throws Exception {
        
        Thread t = new Thread(new MyThread());
        t.start();

        Thread.sleep(1000, 10);
        System.out.println("In main Thread");


    }
}
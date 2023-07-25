


class Demo{
    public static void main(String[] args) throws InterruptedException{
        for(int i = 0; i < 10 ; i++) {
            System.out.println("i = " + i);

            Thread.sleep(1000);
        }
    }
}

// Thread class sleep() methods throws InterruptedException
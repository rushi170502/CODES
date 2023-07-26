
// we can write multiple Exception in single catch block

class Demo{
    public static void main(String[] args) {

    for(int i = 1; i<= 10; i++){
        System.out.println("In for loop");

            try{
                Thread.sleep(1000);
            }catch(InterruptedException | NullPointerException | NumberFormatException ne ){ //seqeunce matters child always first then parent
                System.out.println("Exception Occur");
            }
      }
    }
       
}

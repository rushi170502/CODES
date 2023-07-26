

// Try -catch block

// sequence of exceptions matters in try-catch block


class Demo{
    public static void main(String[] args) {

    for(int i = 1; i<= 10; i++){
        System.out.println("In for loop");

        try{
            Thread.sleep(1000);
        }catch(Exception e){

        }catch(InterruptedException ie){ //seqeunce matters child always first then parent

        }
    }


    }
       
}

/* error: exception InterruptedException has already been caught
        }catch(InterruptedException ie){
         ^ */

class quiz{

    public static void main(String[] args) {
        String svar1 = "This is a string";
        String svar2 = "This is a string";

        if(System.identityHashCode(svar1) == System.identityHashCode(svar2))
            System.out.println("Equal");
        else
            System.out.println("Not equal");
    }
}
/*
   Answer :  Equal
   ( because both string are store t SCP and svar1 is already store at SCP so it gives reference to another svar2)     
 */
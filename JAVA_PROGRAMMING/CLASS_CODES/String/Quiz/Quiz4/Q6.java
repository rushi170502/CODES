

class Quiz{
    public static void main(String[] args) {
        
        StringBuilder sbvar1 = new StringBuilder("Hey");

        StringBuilder sbvar2 = new StringBuilder("Hey");
        if(sbvar1.equals(sbvar2))
            System.out.println("Equal");
        else    
            System.out.println("Not Equal");
    }
}

/*
 * Answer :  Not equal 
 *          equals() method uses hashcode(not identityHashCode) to check the object.
 */
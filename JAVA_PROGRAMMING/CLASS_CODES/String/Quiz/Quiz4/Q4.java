
class Quiz{
    public static void main(String[] args) {
        
        StringBuilder str = new StringBuilder(200);
        str.append("Bytecode is platform independent");

        str.setLength(20);

        System.out.println(str);
    }
}

/*
 * Answer  :  Bytecode is platform 
 *             setlength method sets the content length in the object upto integer index given as parameter. 
 */


class Quiz{
    public static void main(String[] args) {
        
        StringBuilder strBuilder = new StringBuilder("String");
        
        StringBuffer strBuffer = new StringBuffer(strBuilder);
        
        String str = new String(strBuffer);

        System.out.println(str.replace('t','p'));
        System.out.println(str);
    }
}

/*
 * Answer : Spring 
 *          String
 *  
 *          Every change in string given a new object which should be stored in a given object otherwise it will be
 *          discarded 
 *          and the string object  on which method is called remains unchanged. 
 * 
 *    
 *          
 */
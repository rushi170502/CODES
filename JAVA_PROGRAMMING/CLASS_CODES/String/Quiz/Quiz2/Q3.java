
class Quiz2 {
    public static void main(String[] args) {
        
        StringBuffer var1 = new StringBuffer("Shashi");
        String var2 = new String("Shashi");

        if(var1.equals(var2)){
            System.out.println("Both are equal");
        }else{
            System.out.println("Both are not equal");
        }
    }
}

// Answer  : Both are not equal
/*  
 * In var1 & var2 the char sequence is same in both but they are objects of two different classes
 * (stringBuffer and String )
 * Therefore , (both are not equal )
 */

class Quiz2{
    public static void main(String[] args) {
        StringBuffer var1 = new StringBuffer("Shashi");

        StringBuffer var2 = new StringBuffer("Shashi");

        System.out.println(var1.equals(var2));

        var1.setLength(3);

        System.out.println(var1);
    }
}

// Answer :  false 
//           sha
/*      
 *  equals() method of StringBuffer is not overriden as a string and it compares actual object and var1 and var2
 * are different objects therefore equals() method returns false
 * 
 * setlength() method of StringBuffer limits the length of the stringBuffer
 */
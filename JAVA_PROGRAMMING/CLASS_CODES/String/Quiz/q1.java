
class quiz{
    public static void main(String[] args) {
        String str1 = new String( "Java");
        String str2 = new String("Java");

        System.out.println(str1 == str2);
    }
}
/*
 * Answer : 
 *          False (Both strings are created by new so there address is not same)
 */
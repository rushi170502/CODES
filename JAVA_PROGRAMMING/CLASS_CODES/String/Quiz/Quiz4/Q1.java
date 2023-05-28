
class Quiz{
    public static void main(String[] args) {
        StringBuilder str1 = new StringBuilder("StringBuilder");

        StringBuilder str2 = new StringBuilder(str1.substring(6));

        System.out.println(str2);
    }
}
/*
 * Answer : Builder
 *          substring metgod having single integer parameter retur substring from the strong from integer
 *          index as parameter
 */

// reverse() method

class preMethod {
    public static void main(String[] args) {
        
        StringBuffer sb = new StringBuffer("Information");
        
        // reverse method

        sb.reverse();

        System.out.println(sb);

        // 2nd option
        String str1 = new String("Rushikesh");

        StringBuffer sb2 = new StringBuffer(str1);

        str1 = sb2.reverse().toString();// method chaining

        System.out.println(sb2);
        System.out.println(str1);
        
    }
}


class Quiz{
    public static void main(String[] args) {
        
        StringBuilder str = new StringBuilder();

        str.append("Java_Virtual_Machine");

        str.setCharAt(str.charAt(14), 'z');

        System.out.println(str);
    }
}

/*
 * Answer :  Runtime exception :
 * 
 *          Exception in thread "main" java.lang.StringIndexOutOfBoundsException: index 97, length 20
        at java.base/java.lang.String.checkIndex(String.java:4563)
        at java.base/java.lang.AbstractStringBuilder.setCharAt(AbstractStringBuilder.java:533)
        at java.base/java.lang.StringBuilder.setCharAt(StringBuilder.java:91)
        at Quiz.main(Q5.java:10)
 */


class Quiz {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Shashi");

        sb.replace(0, 1,"p");

        System.out.println(sb);
    }
}

/*
 * Answer :  phashi
 *           replace() start,end and character method replaces the string in stringbuilder object within the range
 *           starting and ending
 */
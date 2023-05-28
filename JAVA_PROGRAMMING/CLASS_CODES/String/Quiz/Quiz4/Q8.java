
class Quiz{
    public static void main(String[] args) {
        
        StringBuilder sb = new StringBuilder("Shashi");
        
        sb.insert(6,'t');

        System.out.println(sb);
    }
}

/*
 * Answer : shashit
 *           As the string contains 6 characters i.e index 0-5 and insert method insert character at 6th index 
 *            so string become shashit
 */
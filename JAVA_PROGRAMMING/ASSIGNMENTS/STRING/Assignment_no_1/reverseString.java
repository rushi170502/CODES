
// reverse a string : 
import java.util.*;


class Solution{

    static String my_reverse(String str){

        char ch[] = str.toCharArray();
        String str2 = "";

        for(int i=0; i<ch.length; i++){

            str2 = ch[i] + str2 ;
        }

        return str2;
    }

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in) ;

       System.out.println("Enter the string : ");

       String str = new String (sc.nextLine());

       System.out.println("String is  :  " + str);

       //reverse String
       System.out.println("After string  reverse :  " +my_reverse(str));

    }
}



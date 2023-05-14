
import java.util.*;

class myMethod{

    StringBuffer my_reverse(StringBuffer str){

        String str1 = str.toString();
        char ch1[] = str1.toCharArray();
        String newstr = "";
        for(int i=0; i<ch1.length; i++){

            newstr = ch1[i] + newstr  ;
           
         }

        StringBuffer sb = new StringBuffer(newstr);
        return sb;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        myMethod obj = new myMethod();

        System.out.println("Enter the string :");
        StringBuffer str1 = new StringBuffer(sc.nextLine());

        // before reversing
        System.out.println(str1);

        // after reversing

        System.out.println(obj.my_reverse(str1));


        sc.close();
    }
}
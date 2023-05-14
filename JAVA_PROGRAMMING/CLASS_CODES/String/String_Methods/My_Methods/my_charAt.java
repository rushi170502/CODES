
import java.util.*;
class MethodDemo {

    static char my_charAt(String str ,int index){

        char ch[] = str.toCharArray();
        return ch[index];

    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String ");
        String str = new String(sc.nextLine());

        System.out.println(str);
        System.out.println("Enter the index : ");
        int index = sc.nextInt();

        // my charAt method use
        System.out.println(my_charAt(str ,index));

        
    }
}
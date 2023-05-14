

import java.util.*;

class MethodDemo {

    static int my_indexOf(String str ,char ch , int index) {

        char ch1[] = str.toCharArray();

        for(int i = index; i < ch1.length; i++){

            if(ch1[i] == ch){

                return i;

            }
        }
        return -1;
    }



    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = new String(sc.nextLine());

        System.out.println("Enter the character u wan to find : ");
        char ch = sc.next().charAt(0);

        System.out.println("Enter the index u want to start search  : ");
        int index = sc.nextInt();

        // use of indexOf method
        
        System.out.println(my_indexOf(str ,ch , index));

        sc.close();
    }
}
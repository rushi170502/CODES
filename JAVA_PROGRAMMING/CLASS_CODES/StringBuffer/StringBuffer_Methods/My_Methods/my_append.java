

import java.util.*;
class myMethod{

    static StringBuffer myappend(String str1 , String str2){

        char ch1[] = str1.toCharArray();
        char ch2[] = str2.toCharArray();

        char ch3[] = new char [ch1.length + ch2.length];
        int num = 0;
        for(int i=0; i<ch1.length; i++){
                ch3[num] =  ch1[i];
                num++; 
        }
        for(int i=0; i<ch2.length; i++){
            ch3[num] =  ch2[i];
            num++; 
        }

       String str = new String(ch3);
       StringBuffer sb1 = new StringBuffer(str);

        return sb1 ;

    }
       
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string 1   : ");
        StringBuffer str1 = new StringBuffer(sc.nextLine());

        System.out.println("Enter the string 2   : ");
        StringBuffer str2 = new StringBuffer(sc.nextLine());

        System.out.println(str1);
        System.out.println(str2);

        String st = str1.toString();
        String st1 = str2.toString();
        System.out.println("After append :");
        // my append method
       System.out.println( myappend(st, st1));

        
        sc.close();
    }
}
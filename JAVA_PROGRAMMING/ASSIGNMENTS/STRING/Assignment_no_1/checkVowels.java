

import java.util.*;

class Solution{

    boolean my_checkVowels(String str){

        char ch[]  = str.toCharArray();
        int flag = 0;
        for(int i=0; i<ch.length ;i++){

            if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' 
                         ||  ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O'  || ch[i] == 'u' || ch[i] == 'U'){
                        flag = 0;
            }else{
                     flag = 1;
                     break;
            }                            
        }
        if(flag == 0)
                return true;
        else 
                return false;
    }

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in) ;

       System.out.println("Enter the string : ");

       String str = new String (sc.nextLine());

       System.out.println("String is  :  " + str);

       Solution obj = new Solution();
       
        boolean check  = obj.my_checkVowels(str);

        if(check == true){
            System.out.println("True");
        }else{
            System.out.println("False");
        }
        sc.close();

    }
}


// Anagram String

import java.util.*;
class Solution{

    char[] sequence(String str){

        char ch[] = str.toCharArray();
        for(int i = 0; i < ch.length-1 ; i++){
            for(int j = 0 ; j < ch.length - i - 1 ; j++){

                if(ch[j] < ch[j + 1]){
                    char temp = ch[j];
                    ch[j] = ch[j + 1];
                    ch[j + 1] = temp;
                }
            }
        }
        return ch;
    }

    boolean anagram(String str1, String str2){

        char ch[] = sequence(str1);
        char ch1[] = sequence(str2);

        if(ch.length != ch1.length){
            return false;
        }else{
            for(int i = 0; i < ch.length ;i++){
                if(ch[i] != ch1[i]){
                    return false;
                }
            }
            return true;
        }
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string 1 :");
        String str1 = new String(sc.nextLine());

        System.out.println("Enter the string 2   :");
        String str2 = new String(sc.nextLine());

        Solution obj = new Solution();
        // anagram method
        boolean retval =  obj.anagram(str1, str2);

        if(retval == true){
            System.out.println("Anagram Strings");
        }else{
            System.out.println("Not Anagram Strings ");
        }
    }
}
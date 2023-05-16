import java.util.*;
class Solution{

     boolean my_palindrome (String str){

        char ch[] = str.toCharArray();
        char ch1[]= new char[ch.length];
        int num = 0;
        int flag = 0;
        for(int i = ch.length-1; i >= 0; i--)
                ch1[i] = ch[num++];     
                
        for(int i = 0 ; i<ch.length; i++){

            if(ch[i] == ch1[i]){
                flag = 1;
                continue;
             }
             if(ch[i] != ch1[i]){

                int diff = ch[i] - ch1[i] + 32 - 32;

                if(diff == 32 || diff == -32){
                   flag = 1;
                   continue;
                }
            }
        }

        if(flag == 1)
            return true;
        else    
            return false;
        
    }
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in) ;

       System.out.println("Enter the string : ");

       String str = new String (sc.nextLine());

       System.out.println("String is  :  " + str);
       System.out.println();

        Solution obj = new Solution();
        // my method
       boolean retval = obj.my_palindrome(str);
       if(retval == true){
        System.out.println( "String " +str + "  is  Palindrome ");
       }else{
        System.out.println( "String " +str + "  is not Palindrome ");
       }
       System.out.println();
       
       sc.close();

    }
}


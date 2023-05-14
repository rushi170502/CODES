 

 import java.util.*;

 class MethodDemo{


   static boolean my_equalsIgnorecase(String str1, String str2){

      char ch[] = str1.toCharArray();
      char ch1[] = str2.toCharArray();
      int flag = 0 ;
      if(ch.length == ch1.length){

         for(int i = 0; i < ch.length; i++){

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

                  flag = 0;
                  break;
               }
            }
         }

      if(flag == 1)
         return true;
      else
         return false;
   }
    public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the String 1: ");
    String str1 = new String(sc.nextLine());

    System.out.println("Enter the String 2: ");
    String str2 = new String(sc.nextLine());    
    
    System.out.println(my_equalsIgnorecase(str1, str2));
    
    

    sc.close();

    }
 }




import java.util.*;

class Solution{

    void my_countMethod(String str){

        char ch[]  = str.toCharArray();
        
        for(int i=0; i<ch.length ; i++){    
            int count = 0;
           for(int j=0; j< ch.length; j++){

                if(ch[i]== ch[j]){
                    count++;              
                }
            }
            if(count == 1)
                    System.out.print("   "+ch[i]);
           
           
        }

    }

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in) ;

       System.out.print("Enter the string : ");

       String str = new String (sc.nextLine());

       System.out.println("String is  :  " + str);

       Solution obj = new Solution();
       
        obj.my_countMethod(str);

        sc.close();

    }
}

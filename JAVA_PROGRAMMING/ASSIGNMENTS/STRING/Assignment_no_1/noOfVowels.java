

import java.util.*;

class Solution{

    int my_countMethod(String str){

        char ch[]  = str.toCharArray();
        int cnt = 0;
        for(int i=0; i<ch.length ;i++){

            if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' 
                         ||  ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O'  || ch[i] == 'u' || ch[i] == 'U')
            cnt++;
        }
        return cnt;
    }

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in) ;

       System.out.println("Enter the string : ");

       String str = new String (sc.nextLine());

       System.out.println("String is  :  " + str);

       Solution obj = new Solution();
       
        int count  = obj.my_countMethod(str);

        System.out.println("Count of vowels in string : " + count);
        sc.close();

    }
}

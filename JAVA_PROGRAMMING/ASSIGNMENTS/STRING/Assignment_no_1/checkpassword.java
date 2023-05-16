
import java.util.*;

class Solution{

    static int my_char(char ch){

            if(((int)ch >= 65 && (int)ch <= 91 ) || ((int)ch >= 98 && (int)ch <= 122 )){
                return (int)ch;
            }
            return (int)ch;
    }

    static int my_num(char ch){

            if((((int)ch >= 48) && ((int)ch <= 57))){
                return (int)ch;
              }
        return (int)ch;
    }

    int my_password(String pwd){

        char ch[] = pwd.toCharArray();
        int flag = 0;

        if(ch.length >=  8){

            for(int i=0; i < ch.length; i++){

                if(((int)ch[i] == my_char(ch[i]))){
                    flag = 1;
                    continue;

                }else if(((int)ch[i] == my_num(ch[i]))){
                      flag = 1;
                      continue;
                
                }else{
                        flag = 0;
            }

        }
    }
        return flag;
    
}

    
    
    public static void main(String[] args) {

       Scanner sc = new Scanner(System.in);

       System.out.print("Enter the password : ");

       String pwd = new String (sc.nextLine());

      System.out.println();

       Solution obj = new Solution();
       
        int ret = obj.my_password(pwd);
        if(ret == 0)
            System.out.println("Invalid password");
        else
            System.out.println("valid password");

        sc.close();

    }
}

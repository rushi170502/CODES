
import java.util.*;

class myMethod{

    StringBuffer my_delete(int start, int end, StringBuffer str1){

        String str =  str1.toString();

        char ch[] = str.toCharArray();

        String newstr = ""; 

        if(start >= 0 && start <= end){

                for(int i=0; i<ch.length; i++){
                    if(i >= start && i <= end ){
                        continue;
                    }else{
                        newstr += ch[i];
                    }
                    
                }
        }else{
            System.out.println("invalid index");
        }

        StringBuffer sb1 = new StringBuffer(newstr);
    
        return sb1 ;
    
 }
    
    public static void main(String[] args) {

        myMethod obj = new myMethod();
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String  :");
        StringBuffer str1 = new StringBuffer(sc.nextLine());

        

        System.out.println("Enter the start index : ");
        int start = sc.nextInt();

        System.out.println("Enter the end index : ");
        int end = sc.nextInt();


        System.out.println(str1);


        // use of delete method

        System.out.println("After the delete : ");

        System.out.println(obj.my_delete(start,end,str1));

        sc.close();
    }
}
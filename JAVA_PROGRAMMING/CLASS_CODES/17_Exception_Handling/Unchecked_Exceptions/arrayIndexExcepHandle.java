

// ArryaIndexOutOfBoundsException handling using try-catch block

import java.util.*;

class Demo{
    void m1(int[] arr){
        
        // risky code 
        try{
            for(int i = 0; i < 8; i++){
                System.out.println(arr[i]);
            }
        }catch(ArrayIndexOutOfBoundsException e){
            
        }
    }
}
class client{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        int arr[] = new int[6];
        System.out.println("Enter array elements ");
        for(int i = 0; i < arr.length; i++)
            arr[i] = sc.nextInt();

        sc.close();
        Demo obj = new Demo();

       obj.m1(arr);
     }
}
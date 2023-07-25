
// ArryaIndexOutOfBoundsException in java

import java.util.*;

class Demo{
    void m1(int[] arr){
        for(int i = 0; i < 8; i++){
            System.out.println(arr[i]);

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
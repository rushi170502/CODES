
// Simple overloading scenarios

import java.util.*;
class Solution{

    int add(int x, int y){
        return x + y;
    }
    // overloading 
    int add(int x, int y,int z){
        return x + y + z;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the values of a & b : ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        Solution obj = new Solution();

        int ret_val = obj.add(a,b);
        System.out.println("Addition of a & b  : "+ret_val);

        System.out.println("Enter the values of x, y, z: ");
        int x = sc.nextInt();
        int y = sc.nextInt();
        int z = sc.nextInt();

        int retvalue = obj.add(x,y,z);
        System.out.println("Addition of x, y, z  : "+retvalue);



    }
}
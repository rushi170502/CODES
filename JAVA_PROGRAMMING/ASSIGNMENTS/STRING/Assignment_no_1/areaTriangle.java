
// Area of triangle

import java.util.*;

class Solution{

    int my_AreaofTraingle(int height, int base){
        
           int  area = (height * base) / 2;
             
        return area;
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the height of triangle  :");
        int height = sc.nextInt();

        System.out.println("Enter the base of triangle  :");
        int base = sc.nextInt();

        // Area of triangle method 

        Solution obj = new Solution();

        int Area = obj.my_AreaofTraingle(height, base);
        System.out.println("Area of triangle is  : "+ Area);
        System.out.println();

        sc.close();

    }
}
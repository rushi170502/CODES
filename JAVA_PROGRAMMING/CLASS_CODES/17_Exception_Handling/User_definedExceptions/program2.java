

// User Defined Exception

import java.util.*;

class DataOverFlowException extends RuntimeException {
    DataOverFlowException(String message){
        super(message);
    }
}

class DataUnderFlowException extends RuntimeException {
    DataUnderFlowException(String message){
        super(message);
    }
}

class ArrayDemo{
    public static void main(String[] args) {
        
        int arr[] = new int[5];

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter ther array elements : ");
        System.out.println("Note :  elements must be between 0 and 100");

        for(int i = 0; i < arr.length; i++){
            
            int data = sc.nextInt();

            if(data <= 0){
                throw new DataUnderFlowException("Value is less than 0 "); 
                // throw is use to throw exception delibrately
            }

            if(data >= 100)
                throw new DataOverFlowException(" Value is Greater than 100");
                // throw is use to throw exception delibrately

            arr[i] = data;
        }

        System.out.println("Array elements are : ");
        for(int i = 0; i < arr.length; i++){
            System.out.println(arr[i]);
        }
    }
}
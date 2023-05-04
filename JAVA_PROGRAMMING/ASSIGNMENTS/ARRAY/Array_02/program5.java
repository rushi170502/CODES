
import java.io.*;

class ArrayDemo{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader (new InputStreamReader(System.in));

        System.out.println("Enter the size of array : ");
        int size = Integer.parseInt(br.readLine());

        int arr[] = new int[size];
        System.out.println("Enter the Array elements  :");
        for(int i = 0; i < arr.length ; i++){
            arr[i]= Integer.parseInt(br.readLine());
        }
        int min = arr[0];
        for(int i = 1; i< arr.length;i++) {
            if(arr[i]< min)
                min = arr[i];
        }
        System.out.println("\t Minimum element is "+min);
    }
}
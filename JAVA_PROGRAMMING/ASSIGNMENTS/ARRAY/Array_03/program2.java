
import java.io.*;
class ArrayDemo{
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the size of array :");
        int size = Integer.parseInt(br.readLine());
        int arr[] = new int[size];
        System.out.println("Enter the elements of array : ");
        for(int i = 0; i < arr.length; i++){
            arr[i] = Integer.parseInt(br.readLine());
        }
        for(int i = 0; i< arr.length; i++){
            int rev = 0;
            int num = arr[i];
            while(num != 0){
                int rem = num % 10;
                rev = rev * 10 + rem;
                num /= 10;
            }
            arr[i] = rev;
        }
        for(int i = 0 ; i< arr.length; i++){
            System.out.print("\t"+arr[i]);
        }
        System.out.println();
    }
}
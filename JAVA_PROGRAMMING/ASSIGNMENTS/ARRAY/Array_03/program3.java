
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
        for(int i = 0 ; i < arr.length; i++){
            int count = 0;
            for(int j = 1; j * j < arr[i]; j++) {
                if (arr[i] % j == 0)
                    count++;
            }
            if(count >= 2)
                System.out.print("Composite "+arr[i]+" found at "+i+" index");

        }
        System.out.println();
    }
}
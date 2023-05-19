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
            int sum = 0;
            for(int j = 1; j < arr[i]; j++) {
                if (arr[i] % j == 0) {
                    sum = sum + j;
                }
            }
            if(sum == arr[i])
                    System.out.print("Perfect number "+arr[i]+" found at " +i+" index");
            }
        System.out.println();
    }
}
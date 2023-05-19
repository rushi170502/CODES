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
        for(int i = 0 ; i < arr.length; i++) {
            int num = arr[i];
            int count = 0;
            int sum =0;
            while(num != 0) {
                int rem = num % 10;
                int fact = 1;
                for (int j = 1; j <= rem; j++) {
                    fact = fact * j;
                }
                sum = sum + fact;
                num /= 10;
            }
            if(sum == arr[i])
                System.out.print("Strong number "+arr[i]+" found at index "+i);
        }
        System.out.println();
    }
}
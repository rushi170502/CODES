
// PROGRAM 4:
import java.io.*;
class Demo{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the start");
        int start = Integer.parseInt(br.readLine());
        System.out.println("Enter the end");
        int end = Integer.parseInt(br.readLine());

        for (int i=end; i>=start;i--){
            if(i%2 == 0)
                System.out.print(i+ " ");
        }
        System.out.println();
        for (int i=start; i<=end;i++){
            if(i%2 == 1)
                System.out.print(i+ " ");
        }
    }
}
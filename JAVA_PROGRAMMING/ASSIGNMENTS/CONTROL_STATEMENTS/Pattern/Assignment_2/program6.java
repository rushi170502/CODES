/*
        WAP to print the following pattern

   9   
   9    8
   9    8    7
   9    8    7    6

 */

class pattern {
    public static void main(String[] args) {
        int row = 4;

        for (int i = 1; i <= row; i++) {
            int num = 9;
            for (int j = 1; j <= i; j++) {
                System.out.print(num-- + "\t");
            }
            System.out.println();
        }
    }
}
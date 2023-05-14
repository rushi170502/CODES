
class quiz{
    public static void main(String[] args) {
        int[] arr = {97,98,99,100};
        String str = new String(arr);

        System.out.println(str);
    }
}

/*
 * Answer : error: no suitable constructor found for String(int[])
        String str = new String(arr);
 */
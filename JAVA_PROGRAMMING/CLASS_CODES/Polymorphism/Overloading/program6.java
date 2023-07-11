

class Solution{

    void add(int x, int y){
        System.out.println(x+y);
    }

    void add(int x, int y, int z){
        System.out.println(x+y+z);
    }
    public static void main(String[] args) {
        Solution obj = new Solution();

        obj.add(10,20);

        obj.add(100,200,300);

    }
}
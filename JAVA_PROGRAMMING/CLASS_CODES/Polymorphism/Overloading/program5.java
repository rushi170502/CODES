

class Solution{

    void fun(int x){
        System.out.println(x);
    }

    void fun(float y){
        System.out.println(y);
    }


    void fun(Solution obj){
        System.out.println("In parameter fun");
        System.out.println(obj);
    }
    
    public static void main(String[] args) {

        Solution obj = new Solution();

        obj.fun(10);

        obj.fun(10.5f);

        Solution obj2 = new Solution();

        obj2.fun(obj);

    }
}
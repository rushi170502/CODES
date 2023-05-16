

class Mobiles{

    String brand;
    int camera;
    int size;
    static float revenue;

    static void iPhone(){
        System.out.println("Iphone");
    }

    void oneplus(){
        System.out.println("Oneplus");
        

    }
    public static void main(String[] args) {
        
        Mobiles mb1 = new Mobiles();

        mb1.brand = "oneplus";
        mb1.camera = 64;

        mb1.oneplus();
        System.out.println(mb1.brand);
        System.out.println(mb1.camera);
        
    }

    static int num = 10;
}
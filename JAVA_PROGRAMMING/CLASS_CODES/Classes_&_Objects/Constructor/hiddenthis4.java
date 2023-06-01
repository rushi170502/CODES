
class player{

    private int jer_No = 0;
    private String name = null;

        player(int jer_No, String name) {

            this.jer_No = jer_No;
            this.name = name;
            System.out.println("In player constructor");
        }

        void info(){
            System.out.println(jer_No+ " == "+ name);
            
        }

}

class client{
    public static void main(String[] args) {
        
        player obj1 = new player(18,"Virat");
        obj1.info();

        player obj2 = new player(07,"MSD");
        obj2.info();

        player obj3 = new player(45,"Rohit");
        obj3.info();
    }
}
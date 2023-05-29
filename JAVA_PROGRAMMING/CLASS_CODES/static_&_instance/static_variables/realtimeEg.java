
class Webseries{
    String s_name = "Flames";
    static int total_seasons = 5;
    int episodes = 15;

    void s_info(){
        System.out.println("Series name :  "+s_name);
        System.out.println("Total seasons : "+total_seasons);
        System.out.println("Episodes :" + episodes);

    }
}

class user {
    public static void main(String[] args) {
        Webseries w1 = new Webseries();
        Webseries w2 = new Webseries();
        
        w1.s_info();
        w2.s_info();

        w2.s_name = "Gutur gu";
        w2.total_seasons = 2;//change in static variable so effect seen to other objects also
        w2.episodes = 5;

        w1.s_info();
        w2.s_info();
    }
}
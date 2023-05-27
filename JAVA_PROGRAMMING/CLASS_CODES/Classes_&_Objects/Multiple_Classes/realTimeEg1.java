

class McD{
    int no_of_burger = 10;
    String item = "Fries";

    void disp_menu(){
        String menu1 = "Veg";
        String menu2 = "Non-veg";

        System.out.println(no_of_burger);
        System.out.println(item);
    }
}

class customer{
    public static void main(String[] args) {
        McD m1 = new McD();
        m1.disp_menu();
    }
}
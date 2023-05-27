
// RealTime example 2
 
class Laptop{

    int budget = 100000;
    String lap_Type = "Gaming";

    void laptop_info(){
        String comp_name = "ASUS";
        String model = "F17";

        System.out.println("Laptop type : "+lap_Type);
        System.out.println("Laptop budegt : "+budget);
        System.out.println("Company Name : " +comp_name);
        System.out.println("Laptop Model  : " +model);
    }
}

class user{
    public static void main(String[] args) {
        Laptop obj = new Laptop();
        obj.laptop_info();
    }
}
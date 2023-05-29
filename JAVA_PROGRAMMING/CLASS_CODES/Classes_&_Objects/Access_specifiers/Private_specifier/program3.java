
class employee{
    int emp_id = 101;
    String emp_name = "Rushikesh";

    void info(){
        System.out.println("Employee id :  "+emp_id);
        System.out.println("Employee name :  "+emp_name);
    }
}

class user{
    public static void main(String[] args) {

        employee obj1 = new employee();

        obj1.info();
        // if this are public then we cam access anywhere in program by creating object of that class

        System.out.println(obj1.emp_id);
        System.out.println(obj1.emp_name);
        
    }
}


class Employee{

    // both are instance variables
    int emp_id = 101;
    String name = "John";

    // this is a static variable
    static int y = 50;

    void emp_info(){
        System.out.println(emp_id);
        System.out.println(name);
        System.out.println(y);
    }
}

class Demo{
    public static void main(String[] args) {

        Employee emp1 = new Employee();
        Employee emp2 = new Employee();

        emp1.emp_info();
        emp2.emp_info();

        System.out.println("after change in data ");

        emp2.emp_id = 201; // 
        emp2.name = "smith"; // both are change by any object change cannot seen to other objects
        emp2.y = 5000; // change in static variable so effect seen to other objects also
        
        emp1.emp_info();
        emp2.emp_info();
    }
}
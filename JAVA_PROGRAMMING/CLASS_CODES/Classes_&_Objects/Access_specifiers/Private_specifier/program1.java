

// private access specifier

class C2W{
    int no_of_courses = 10;

    private String fav_course = "Java with DS";

    void disp(){
        System.out.println(no_of_courses);
        System.out.println(fav_course);
    }
}

class student{

    public static void main(String[] args) {
        C2W obj = new C2W();
        obj.disp();// calling function using object

        System.out.println(obj.no_of_courses);// print using object because it is public so it is accessible.

        // System.out.println(obj.fav_course); // error : fav_course string has private access in C2W
    }
}
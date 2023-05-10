

//  append() ;

class preMethod{
    public static void main(String[] args) {
        StringBuffer str1 = new StringBuffer("Rushi");

        System.out.println(str1);

        // use of append method 
        String str2 = "Birari";

        str1.append(str2);// RushiBirari

        System.out.println(str1);// RushiBirari

        StringBuffer str3 = new StringBuffer("Nashik");
        str1.append(str3);

        System.out.println(str1);// RushiBirariNashik


    }
}
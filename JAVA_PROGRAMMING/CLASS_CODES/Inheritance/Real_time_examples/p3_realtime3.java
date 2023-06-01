
/*  Real time example of inheritance
    eg : company and car
*/

class TATA{

    String logo = "TATA";

    TATA(){
        System.out.println("In TATA constructor");
    }

    
    void companyInfo(){
        //System.out.println(logo);
        System.out.println("Owner :  "+"TATA Group");
        System.out.println("Info  :"+ "The Tata Group was founded  in 1868 by entrepreneur and philanthropist Jamsetji Nusserwanji Tata");
    }
}

class HARRIER extends TATA {

    HARRIER(){
        System.out.println("In Harrier constructor");
    }

}

class SAFARI extends TATA {

    SAFARI(){
            System.out.println("In SAFARI constructor");
    }
}

class  User{
    public static void main(String[] args) {
        
        HARRIER obj1 = new HARRIER();
        System.out.println("logo :  "+obj1.logo);
        obj1.companyInfo();

        SAFARI obj2 = new SAFARI();
        System.out.println("logo :  "+obj2.logo);
        obj2.companyInfo();

    }
}
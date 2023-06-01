

// Eg :  1. Realtime example
// example of Cricket board :

class ICC{

    ICC(){
        System.out.println("In ICC constructor");
    }

    void countryName(){
        System.out.println("INDIA, AUSTRALLIA, ENGLAND, NEW ZELNAD, SRI LANKA, WEST-INDIES");
    }
}

class BCCI extends ICC{
    BCCI(){
        System.out.println("In BCCI constructor");
    }
}

class ECB extends ICC{
    ECB(){
        System.out.println("In ECB constructor");
    }
}

class client{
    public static void main(String[] args) {
        
        // creating object of child BCCI
        BCCI obj1 = new BCCI();
        obj1.countryName();

        // creating object of child ECB
        ECB obj2 = new ECB();
        obj2.countryName();

    }
}
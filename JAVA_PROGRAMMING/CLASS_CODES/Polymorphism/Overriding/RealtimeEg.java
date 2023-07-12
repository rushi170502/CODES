

// Real time example of overriding

class Match{
    void matchType(){
        System.out.println("T20 / ODI / Test");
    }
}

class IPL_Match extends Match{
    void matchType(){
        System.out.println("Type  :  T20");
    }
}

class Test_Match extends Match{
    void matchType(){
        System.out.println("Type : Test  ");
    }
}

class client{
    public static void main(String[] args) {
        
        Match type1 =  new IPL_Match();

        type1.matchType();

        Match type2 = new Test_Match();

        type2.matchType();

    }
}


// Real time example of cricket match

class IPL{
    void match_Info(String team1, String team2){
        System.out.println(team1 + " vs "+ team2);
    }

    void match_Info(String team1, String team2,String venue){
        System.out.println("Match : "+ team1 + " vs " +team2+ " venue  : "+venue);
    }
}

class client{
    public static void main(String[] args) {
        IPL ipl_23 = new IPL();

        ipl_23.match_Info("CSK", "RCB");

        ipl_23.match_Info("RCB", "MI","Banglore");
    }
}
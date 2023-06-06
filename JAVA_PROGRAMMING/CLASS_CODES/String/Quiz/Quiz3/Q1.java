
class Quiz{
    public static void main(String[] args) {
        String svar1 = "Core2Web";
        String svar2 = " Technologies";

        if(svar1 == svar1.concat(svar2))
            System.out.println("Hey");
        else if(svar2 == svar1.concat(svar2))
            System.out.println("Hii");
        else
            System.out.println("Bye");
    }
}
/*Answer  : Bye */
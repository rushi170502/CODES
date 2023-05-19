
class Quiz2 {

    public static void main(String[] args) {
        
        String var1 = new String("Shashi");
        String var2 = var1.reverse();

        System.out.println(var1);
        System.out.println(var2);

    }
}

// Answer : Error  :(compile time error reverse method not found )
/*
 * error: cannot find symbol
        String var2 = var1.reverse();   
                          ^
  symbol:   method reverse()
  location: variable var1 of type String
 */
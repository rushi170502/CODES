

class Quiz{
    public static void main(String[] args) {
         StringBuilder str = new   StringBuilder("Builder");

         str.insert(5,new String("0"));

         str.reverse();
         System.out.println(str.reverse());

    }
}

/*
 *  Answer  : Build0er
 *              unlike string the change madhe in stringbuilder object will not gives new object but results change 
 *              in existing object.
 *              and reverse that string.
 */
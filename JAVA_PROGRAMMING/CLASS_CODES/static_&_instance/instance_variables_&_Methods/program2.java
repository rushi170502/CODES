

class Demo{
     int x = 10; // instance variable

     Demo(){
        System.out.println("In constructor ");
     }
     {
        System.out.println("Instance block -1");
     }
    
     {
        System.out.println("Instance block -2");
     }
    
}

class user{
    public static void main(String[] args) {
       
        Demo obj = new Demo();

        System.out.println("In main");

   }    
}


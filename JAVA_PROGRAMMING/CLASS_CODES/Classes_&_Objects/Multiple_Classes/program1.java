

// implementation oof two different classes

class Project{
    String proj_Name = "Online Education";
    int No_of_members = 20;

    void clientInfo(){
        String client_name =  "Core2Web";
        System.out.println(client_name);
        System.out.println(proj_Name);
        System.out.println(No_of_members);
    }
}

class C2W{
    public static void main(String[] args) {
       
        Project obj = new Project();

        obj.clientInfo();

    }
}
class login
{
   private:
        int id;
        string username;
        string password;
        bool status;
        int admin_id;
   public:
        void set();
        int getadmin_id();
        int checklogin();
        void changepassword();
        void forgotpassword();
        void addlogin();
};

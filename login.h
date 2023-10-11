class login
{
   private:
        int id;
        char username[30];
        char password[30];
        bool status;
   public:
        int admin_id;
        void set();
        int getadmin_id();
        int checklogin();
        void changepassword();
        void forgotpassword();
        void addlogin();
};

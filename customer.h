
class customer
{
    private:
        int cus_id;
        char cus_name[30];
        int cus_mobile;
        char cus_address[30];
        char cus_email[30];

    public:

        void addcustomer();
        void getcustomer();
        void searchcustomer();
        void updatecustomer();
        int getid();
};

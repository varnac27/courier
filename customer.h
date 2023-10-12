#include<string>
class customer
{
    private:
        int cus_id;
        string cus_name;
        int cus_mobile;
        string cus_address;
        string cus_email;

    public:

        void addcustomer();
        void getcustomer();
        void searchcustomer();
        void updatecustomer();
        int getid();
};

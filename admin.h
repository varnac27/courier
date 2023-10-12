#include "login.h"
#include "courier.h"
#include "office.h"
#include<string>
class admin:public courier
{
    private:
        int ad_id;
        string ad_name;
        int ad_mobile;
        string ad_email;
        bool ad_status;
        login *obj;
        office *off;
    public:
        admin();
        void addadmin();
        void updateadmin();
        void searchadmin();
        void handle(office *off_object);
};

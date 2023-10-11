#include "login.h"
#include "courier.h"
#include "office.h"
class admin:public courier
{
    private:
        int ad_id;
        char ad_name[30];
        int ad_mobile;
        char ad_email[70];
        bool ad_status;
        login *obj;
        office *off;
    public:
        admin();
        void addadmin();
        void updateadmin();
        void searchadmin();
};

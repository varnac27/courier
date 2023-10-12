#include "shipment.h"
#include "office.h"
#ifndef courier_h
#define courier_h
class customer;
class courier:public office
{
    private:
        int c_id;
        int office_id;
        int shipment_id;
        string title;
        shipment *ship_obj;
    public:
        courier();
        void addcourier();
        void getcourier(customer );
        void updatecourier( );
        void courierstatus();
};
#endif

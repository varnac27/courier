#include "courier.h"
#include<iostream>
#include "customer.h"
using namespace std;
courier::courier()
{
    std::unique_ptr<shipment> ship_obj = std::make_unique<shipment>();
}
void courier::addcourier()
{

    cout<<"\nEnter courier id:";
    cin>>c_id;
    cout<<"\nEnter courier office id:";
    cin>>office_id;
    cout<<"\nEnter shipment id:";
    cin>>shipment_id;
    cout<<"\nEnter title:";
    cin>>title;
    ship_obj->setshipmentid(shipment_id);
    ship_obj->addshipment();
    cout<<"\nShipment added";
}
void courier::getcourier(customer cus)
{
    cus.getcustomer();
    cout<<"\nCourier id        :"<<c_id;
    cout<<"\nCourier office id :"<<office_id;
    cout<<"\nShipment id       :"<<shipment_id;
    cout<<"\nTitle             :"<<title;
    cout<<"\nShipment details";
    ship_obj->getshipment();

}
void courier::updatecourier()
{
    cout<<"\nUPDATE COURIER";
    cout<<"\nEnter shipment id: ";
    cin>>shipment_id;
    cout<<"\nEnter title :";
    cin>>title;
    ship_obj->setshipmentid(shipment_id);
    cout<<"\nShipment id updated";
}
void courier::courierstatus()
{
    int id;
    int result;
    int d;
    cout<<"\nEnter shipment id to check if its present:";
    cin>>id;
    result=ship_obj->searchshipment(id);
    if(result==1)
    {
        cout<<"\nShipment processed";
        cout<<"\nEnter present date:";
        cin>>d;
        if(d>ship_obj->getdate())
        {
            cout<<"\nShipment delivered";
        }
        else if(d<ship_obj->getdate())
        {
            cout<<"\nShipment on process";
        }


    }
    else
        cout<<"\nShipment not found";

}

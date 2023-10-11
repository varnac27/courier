#include "shipment.h"
#include<iostream>
using namespace std;
void shipment::addshipment()
{
    cout<<"\nEnter from city: ";
    cin>>from_city;
    cout<<"\nEnter to city: ";
    cin>>to_city;
    cout<<"\nEnter weight: ";
    cin>>weight;
    cout<<"\nEnter date  :";
    cin>>date;

}
void shipment::getshipment()
{
    cout<<"\nShipment id         : "<<ship_id;
    cout<<"\nFrom city           :"<<from_city;
    cout<<"\nTo city             :"<<to_city;
    cout<<"\nWeight              :"<<weight;
    cout<<"\nDate                :"<<date;

}
void shipment::updateshipment()
{
    cout<<"\nUPDATE SHIPMENT";
    cout<<"\nEnter from city: ";
    cin>>from_city;
    cout<<"\nEnter to city: ";
    cin>>to_city;
    cout<<"\nEnter weight: ";
    cin>>weight;
    cout<<"\nEnter date: ";
    cin>>date;

}
int shipment::getdate()
{
    return date;

}
int shipment::searchshipment(int id)
{
    if(getid()==id)
    {
        cout<<"\nShipment found";
        return 1;
    }
    else
        return 0;

}
void shipment::setshipmentid(int id)
{
   ship_id=id;
}
int shipment::getid()
{
    return ship_id;
}

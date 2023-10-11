#include "customer.h"
#include<iostream>
using namespace std;
int customer::getid()
{
    return cus_id;
}
void customer::addcustomer()
{
    cout<<"\nEnter customer id:";
    cin>>cus_id;
    cout<<"\nEnter customer name:";
    cin>>cus_name;
    cout<<"\nEnter mobile number:";
    cin>>cus_mobile;
    cout<<"\nEnter customer address:";
    cin>>cus_address;
    cout<<"\nEnter customer email:";
    cin>>cus_email;
    cout<<"\nCustomer details added.Now customer wants to enter courier datas";
}
void customer::getcustomer()
{
    cout<<"\nCustomer id      :"<<cus_id;
    cout<<"\nCustomer name    :"<<cus_name;
    cout<<"\nCustomer mobile  :"<<cus_mobile;
    cout<<"\nCustomer address :"<<cus_address;
    cout<<"\nCustomer email   :"<<cus_email;

}
void customer::updatecustomer()
{
    cout<<"\nUPDATE CUSTOMER DETAILS";
    cout<<"\nEnter mobile number:";
    cin>>cus_mobile;
    cout<<"\nEnter address: ";
    cin>>cus_address;

}
void customer::searchcustomer()
{
    int id,i;
    cout<<"\n enter customer id to be searched:";
    cin>>id;
    if(id==cus_id)
    {
        cout<<"\nFound";
    }
    else
    {
        cout<<"\nNot found";
    }
}

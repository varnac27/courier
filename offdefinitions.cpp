#include "office.h"
#include<iostream>
#include<string.h>
using namespace std;
office::office()
{

}
void office::addoffice()
{
    cout<<"\nEnter office id: ";
    cin>>off_id;
    cout<<"\nEnter name:";
    cin>>off_name;
    cout<<"\nEnter address:";
    cin>>off_address;
    cout<<"\nEnter phone:";
    cin>>off_phone;
}
void office::updateoffice()
{
    cout<<"\nUPDATE OFFICE";
    cout<<"\nEnter office id:";
    cin>>off_id;
    cout<<"\nEnter address:";
    cin>>off_address;
    cout<<"\nEnter phone:";
    cin>>off_phone;
}
void office::searchoffice()
{
    int o_id;
    cout<<"\nEnter office is to be searched:";
    cin>>o_id;
    if(off_id==o_id)
        cout<<"\nFound";
    else
        cout<<"\nNot found";
}
void office::getoffice()
{
    cout<<"\nOffice id  :"<<off_id;
    cout<<"\nName       :"<<off_name;
    cout<<"\nAddress    :"<<off_address;
    cout<<"\nPhone      :"<<off_phone;
}

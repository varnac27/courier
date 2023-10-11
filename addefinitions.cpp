#include "admin.h"
#include<memory>
#include<iostream>
#include<string.h>
class office;
using namespace std;
admin::admin()
{
    auto <login> loginobj =make_unique<login>();
    auto <office> officeoff =make_unique<office>();
}
void admin::addadmin()
{
    int ch;
    int choice;
    int flag=1;
    cout<<"\nEnter admin id:";
    cin>>ad_id;
    cout<<"\nEnter admin name:";
    cin>>ad_name;
    cout<<"\nEnter mobile number:";
    cin>>ad_mobile;
    cout<<"\nEnter email:";
    cin>>ad_email;
    ad_status=true;// admin is set up
    cout<<"\nSet up login? if yes enter 1:";
    cin>>ch;
    if(ch==1)
        loginobj->set();
    cout<<"\nLogin or exit? if login enter 1: ";
    cin>>ch;
    if(ch==1 && loginobj->checklogin())
    {
        cout<<"\nGO TO OFFICE, if yes enter 1: ";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\n1.Add office";
            cout<<"\n2.Update office";
            cout<<"\n3.search office";
            cout<<"\n4.get office";
            while(flag==1)
            {
                cout<<"\nEnter your choice:";
                cin>>choice;
                switch(choice)
                {
                    case 1: officeoff->addoffice();
                            break;
                    case 2:officeoff->updateoffice();
                            break;
                    case 3:officeoff->searchoffice();
                            break;
                    default:officeoff->getoffice();
                            break;
                }
                cout<<"\nWant to continue? if yes enter 1: ";
                cin>>flag;
            }
        }
    }
    flag=1;

    if(loginobj->checklogin())
    {
        cout<<"\nGO TO COURIER DETAILS if yes enter 1: ";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\n1.Update courier";
            cout<<"\n2.courier status";

            while(flag==1)
            {
                cout<<"\n Enter choice";
                cin>>choice;
                switch(choice)
                {
                    case 1:updatecourier();
                            break;
                    case 2:courierstatus();
                            break;
                    default: cout<<"give choice as 1 or 2";
                                break;
                }
                cout<<"\nWant to continue? if yes enter 1 :";
                cin>>flag;
            }
        }
    }

}
void admin::updateadmin()
{
    cout<<"\nUPDATE ADMIN";
    cout<<"\nNew id:";
    cin>>ad_id;
    cout<<"\nNew email:";
    cin>>ad_email;
    ad_status=true;
    obj->admin_id=ad_id;
    cout<<"\nAdmin id also updated in LOGIN";
}
void admin::searchadmin()
{
    int s_id;
    cout<<"\nEnter id to be searched";
    cin>>s_id;
    if(s_id==ad_id)
        cout<<"\nFound";
    else
        cout<<"\nNot found";
}

#include <iostream>
#include<fstream>
#include "admin.h"
#include "customer.h"
using namespace std;
int main()
{
    ofstream fin;
    ifstream fout;
    fin.open("Courier Management system.txt",ios::app);
    fout.open("Courier Management system.txt");
    if(fin.fail())
        cout<<"\nCouldnt open file.";
    int ch;
    int flag=1;
    int flag1=1;
    customer cus_obj,customer_obj;
    courier courier_obj;
    cout<<"\n1.Add customer";
    cout<<"\n2.Update customer";
    cout<<"\n3.Search customer";
    cout<<"\n4.Get customer";
    while(flag==1)
    {
        cout<<"\nEnter(main menu of customer) your choice";
        cin>>ch;
        switch(ch)
        {
            case 1: customer_obj.addcustomer();
                    fin.write((char*)&customer_obj,sizeof(customer_obj));
                    cout<<"\n1.Add courier";
                    cout<<"\n2.Update courier";
                    cout<<"\n3.Courier status";
                    cout<<"\n4.Get courier";
                    while(flag1==1)
                    {
                    cout<<"\nEnter your choice(office menu):";
                    cin>>ch;
                    switch(ch)
                    {
                            case 1: courier_obj.addcourier();
                                    fin.write((char*)&courier_obj,sizeof(courier_obj));

                                    break;
                            case 2:fin.write((char*)&courier_obj,sizeof(courier_obj));
                                    courier_obj.updatecourier();

                                    break;
                            case 3:
                                    fout.read((char*)&courier_obj,sizeof(courier_obj));
                                    courier_obj.courierstatus();
                                    break;
                            case 4: fout.read((char*)&courier_obj,sizeof(courier_obj));
                                    courier_obj.getcourier(customer_obj );
                                    break;
                    }
                    cout<<"\nWant to continue? if yes enter 1";
                    cin>>flag1;
                    }
                    break;
            case 2:customer_obj.updatecustomer();
                    fin.write((char*)&customer_obj,sizeof(customer_obj));
                    break;
            case 3: fout.read((char*)&customer_obj,sizeof(customer_obj));
                    cus_obj.searchcustomer();
                    break;
            case 4: fout.read((char*)&customer_obj,sizeof(customer_obj));
                    customer_obj.getcustomer();
                    break;

        }
        cout<<"\nWant to continue? if yes enter1: ";
        cin>>flag;
        if(flag!=1)
        {
            fin.close();
            fout.close();
        }
    }

    flag=1;
    admin ad_obj;
    fin.open("Courier Management system.txt",ios::app);
    fout.open("Courier Management system.txt");
    cout<<"\n1.Add admin";
    cout<<"\n2.Update admin";
    cout<<"\n3.Search admin";
    while(flag==1)
    {
        cout<<"\nEnter(main menu of admin)your choice";
        cin>>ch;
        switch(ch)
        {
            case 1: ad_obj.addadmin();
                    fin.write((char*)&ad_obj,sizeof(ad_obj));
                    break;

            case 2: ad_obj.updateadmin();
                    fin.write((char*)&ad_obj,sizeof(ad_obj));
                    break;
            case 3: fout.read((char*)&ad_obj,sizeof(ad_obj));
                    ad_obj.searchadmin();
                    break;
        }
        cout<<"\nWant to continue? if yes enter 1 :";
        cin>>flag;
    }
    fin.close();
    fout.close();
}

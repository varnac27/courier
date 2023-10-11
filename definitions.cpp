#include "login.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void login::changepassword()
{
    char new_pw[30],new_pw1[30];
    cout<<"\nEnter new password:";
    cin>>new_pw;
    cout<<"\n Enter again:";
    cin>>new_pw1;
    if(strcmp(new_pw,new_pw1)==0)
    {
        strcpy(password,new_pw);
        cout<<"Password successfully changed";
    }
    else
        cout<<"Password doesn't match. Access failed";

}
void login::forgotpassword()
{
    char last_pw[30],new_pw2[30];
    cout<<"\nEnter the last password u remember:";
    cin>>last_pw;
    cout<<"\nEnter password (min 8 chars):";
    cin>>new_pw2;
    while(1)
    {
        if(strlen(new_pw2)>=8)
        {
            cout<<"Password updated";
            strcpy(password,new_pw2);
            exit(0);
        }
        else
        {
            cout<<"\nEnter strong password";
            cin>>new_pw2;
        }
    }
}

void login::set()
{
    int ch;
    cout<<"\nEnter login id:";
    cin>>id;
    cout<<"\nEnter admin id:";
    cin>>admin_id;
    cout<<"\nEnter user name:";
    cin>>username;
    cout<<"\nDo u wanna change password?? if yes enter 1.";
    cin>>ch;
    if(ch==1)
        changepassword();
    else
    {
        cout<<"\nEnter password:";
        cin>>password;
    }
}
int login::checklogin()
{
     char name[30],pw[30];
     int ch;
     cout<<"\n TO LOGIN ";
     cout<<"\nUsername:";
     cin>>name;
     cout<<"\nPassword:";
     cout<<"\nDid u forget your password?? if yes enter 0.";
     cin>>ch;
     if(ch==0)
         forgotpassword();
     else
         cout<<"\nEnter password:";
         cin>>pw;

     if((strcmp(name,username)==0)&&(strcmp(pw,password)==0))
     {
        cout<<"\nLogin accessed";
        return 1;
     }
    else
        cout<<"\nLogin failed";
        return 0;
}
int login::getadmin_id()
{
    return admin_id;
}

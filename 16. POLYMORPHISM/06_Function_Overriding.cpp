// Write a program to print first and last name using function overriding.

#include<iostream>
#include<cstring>
using namespace std;
class first{
    protected:
    char fname[50];

    public:
    void getdata(){
        cout<<"Enter first name: ";
        cin>>fname;
    }

    void putdata(){
        cout<<"First Name is "<<fname<<endl;
    }
};

class last : public first{
    protected:
    char lname[50];

    public:
    void getdata(){
        cout<<"Enter last name: ";
        cin>>lname;
    }

    void putdata(){
        cout<<"Last Name is "<<lname<<endl;
    }
};

int main(){
    last obj;
    obj.first::getdata();
    obj.getdata();
    cout<<"\n *** O-U-T-P-U-T ***"<<endl;
    obj.first::putdata();
    obj.putdata();
    return 0;
}
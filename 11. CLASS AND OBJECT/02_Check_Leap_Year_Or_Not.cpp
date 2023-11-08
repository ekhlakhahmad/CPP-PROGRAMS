// Write a program to check year is leap year or not.

#include<iostream>
using namespace std;
class leap{
    private:
    int year;
    public:
    void getdata(){
        cout<<"Enter any year: ";
        cin>>year;
    }
    void putdata(){
        if(year % 4 == 0){
            cout<<year<<" is a leap year"<<endl;
        }
        else{
            cout<<year<<" is not a leap year"<<endl;
        }
    }
};
int main(){
    leap obj;
    obj.getdata();
    obj.putdata();
    return 0;
}
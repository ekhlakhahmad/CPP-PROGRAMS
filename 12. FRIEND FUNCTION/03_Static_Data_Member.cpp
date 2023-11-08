// Write a program to implementation of Static Data Member.

#include<iostream>
using namespace std;
class demo{
    int x, y;
    static int z;
    public:
    void getdata(){
        cout<<"Enter Two Number: ";
        cin>>x>>y;
    }

    void putdata(){
        cout<<"X = "<<x<<"\t Y = "<<y<<"\t Static Z = "<<z<<endl;
    }
};
int demo::z;

int main(){
    demo obj;
    demo obj1;
    obj.getdata();
    obj1.getdata();
    obj.putdata();
    obj1.putdata();

    return 0;
}
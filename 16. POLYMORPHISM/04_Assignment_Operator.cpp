// Write a program to implement Assignment operator.

#include<iostream>
using namespace std;
class demo{
    int x, y;
    
    public:
    void getdata(){
        cout<<"Enter two Number: ";
        cin>>x>>y;
    }

    void putdata(){
        cout<<"Value of X = "<<x<<endl;
        cout<<"Value of Y = "<<y<<endl;
    }

    void operator == ( demo obj2){
        x = obj2.x;
        y = obj2.y;
    }
};

int main(){
    demo obj1, obj2;
    obj2.getdata();
    obj1 = obj2;
    obj1.putdata();
    obj2.putdata();
    return 0;
}
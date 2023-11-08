// Write a program to implementation of Desctructor.

#include<iostream>
using namespace std;
int count = 0;
class demo{
    public:
    demo(){
        count ++;
        cout<<"No of Object Created "<<count<<endl;
    }

    ~demo(){
        cout<<"No of Object Destroyed "<<count<<endl;
        count --;
    }
};

int main(){
    demo obj1, obj2, obj3;
    {
        demo obj4;
        return 0;
    }
}
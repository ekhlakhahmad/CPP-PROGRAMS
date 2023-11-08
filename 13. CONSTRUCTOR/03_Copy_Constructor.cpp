// Write a program to Implementation of Copy Constructor.

#include<iostream>
using namespace std;
class demo{
    int a;
    public:

    demo(){
        a = 10;
    }

    demo (demo &z){
        a = z.a;
    }

    void putdata(){
        cout<<"A = "<<a<<endl;
    }
};

int main(){
    demo obj;
    demo obj1(obj);
    obj.putdata();
    obj1.putdata();

    return 0;
}
// Write a program to implement of all three constructor default constructor, parameterized constructor, and copy constructor (Constructor Overloading).

#include<iostream>
using namespace std;
class demo{
    int a;
    public:

    demo(){
        a = 10;
    }

    demo(int x){
        a = x;
    }

    demo(demo &z){
        a = z.a;
    }

    void putdata(){
        cout<<"A = "<<a<<endl;
    }
};

int main(){
    demo obj1;
    demo obj2(50);
    demo obj3(obj1);

    obj1.putdata();
    obj2.putdata();
    obj3.putdata();

    return 0;
}
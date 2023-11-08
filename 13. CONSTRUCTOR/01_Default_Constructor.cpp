// Write a program to Implementation of Default Construction.

#include<iostream>
using namespace std;
class abc{
    int a, b;
    public:
    
    abc(){
        a = 10; 
        b = 20;
    }

    void putdata();
};

void abc::putdata(){
    cout<<"A = "<<a<<"\t B = "<<b;
}
       
    int main(){
        abc obj;
        obj.putdata();
        return 0;
    }

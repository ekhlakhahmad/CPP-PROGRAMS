// Write a program to print 10 to 1 Number.

#include<iostream>
using namespace std;
class tenone{
    public:
    void putdata(){
        for(int i = 10; i >= 1; i--)
            cout<<i<<endl;
    }
};

int main(){
    tenone obj;
    obj.putdata();
    return 0;
}
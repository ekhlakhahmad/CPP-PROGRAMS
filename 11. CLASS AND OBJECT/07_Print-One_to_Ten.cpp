// Write a program to print 1 to 10 number.

#include<iostream>
using namespace std;
class oneten{
    public:
    void putdata(){
        for(int i = 1; i <= 10; i++)
            cout<<i<<endl;
    }
};

int main(){
    oneten obj;
    obj.putdata();
    return 0;
}
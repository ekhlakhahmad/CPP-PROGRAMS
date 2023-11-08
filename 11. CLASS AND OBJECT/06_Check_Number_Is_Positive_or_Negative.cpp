// Write a program to check the number is Positive or Negative number.

#include<iostream>
using namespace std;
class posnegzero{
    private:
    int a;

    public:
    void getdata();
    void putdata();
};

void posnegzero::getdata(){
    cout<<"Enter any Number: ";
    cin>>a;
}

void posnegzero::putdata(){
    if(a > 0)
        cout<<"Positive Number"<<endl;
    
    else if(a < 0)
        cout<<"Negative Number"<<endl;
    
    else
        cout<<"Zero"<<endl;
}

int main(){
    posnegzero obj;
    obj.getdata();
    obj.putdata();
    return 0;
}

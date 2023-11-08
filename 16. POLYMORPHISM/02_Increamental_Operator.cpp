// Write a program to implement increamental operator.

#include<iostream>
using namespace std;
class demo{
    int x;
    
    public:
    void getdata(){
        cout<<"Enter a Number: ";
        cin>>x;
    }

    void putdata(){
        cout<<"Value of X = "<<x<<endl;
    }

    void operator ++ (int){
        x = x + 1;
    }
};

int main(){
    demo obj;
    obj.getdata();
    obj.putdata();
    obj++;
    cout<<"Value after Increament ";
    obj.putdata();
    return 0;
}
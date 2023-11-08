// Write a program to Find the Maximum and Minimum number using outside of the class.

#include<iostream>
using namespace std;
class greatest{
    private:
    int a,b;
    
    public:
    void getdata();
    void putdata();
};
void greatest::getdata(){
    cout<<"Enter any two number: ";
    cin>>a>>b;
}
void greatest::putdata(){
    if(a>b){
        cout<<a<< " is greatest number"<<endl;
    }
    else if(a<b){
        cout<<b<<" is greatest number"<<endl;
    }
    else{
        cout<<a<<" and "<<b<<" both are equal"<<endl;
    }
}
int main(){
    greatest obj;
    obj.getdata();
    obj.putdata();
    return 0;
}
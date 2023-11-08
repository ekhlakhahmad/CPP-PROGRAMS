// Write a program to Add Two number using Friend function.

#include<iostream>
using namespace std; 
class add{
    private:
    int a, b, c;

    public:
    void getdata();
    friend int sum(add);
};

void add::getdata(){
    cout<<"Enter any Two Number: ";
    cin>>a>>b;
}

int sum(add obj){
    return (obj.a + obj.b);
}

int main(){
    add obj;
    obj.getdata();
    cout<<"Addition = "<<sum(obj);
    return 0;
}
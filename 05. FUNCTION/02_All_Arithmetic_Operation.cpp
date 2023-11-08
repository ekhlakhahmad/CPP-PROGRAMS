#include<iostream>
using namespace std;
int add(int x, int y);

int add(int x, int y){
    int z;

    z = x + y;
    cout<<"Additio = "<<z<<endl;
    return (x + y);
}

int sub(int x, int y){
    int z; 
    z = x - y;
    cout<<"Subtration = "<<z<<endl;
    return (x - y);
}

int mul(int x, int y){
    int z; 
    z = x * y;
    cout<<"Multiplication = "<<z<<endl;
    return (x * y);
}

int divi(int x, int y){
    int z; 
    z = x / y;
    cout<<"Division = "<<z<<endl;
    return (x / y);
}

int main(){
    int a, b;
    cout<<"Enter any two number: ";
    cin>>a>>b;

    add(a, b);
    sub(a,b);
    mul(a,b);
    divi(a,b);

    return 0;
}
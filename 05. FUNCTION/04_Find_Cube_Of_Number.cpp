#include<iostream>
using namespace std;
int cube(int x);

int cube(int x){
    int c;

    c = x * x * x;
    cout<<"Cube of "<<x<<" = "<<c;
    return (c);
}

int main(){
    int a;
    cout<<"Enter any number: ";
    cin>>a;

    cube(a);
    return 0;
}
#include<iostream>
using namespace std;
int add(int x, int y);

int add(int x, int y){
    int z;
    z = x + y;
    cout<<"Addition = "<<z;
    return (x + y);
}

int main(){
    int a, b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    add(a,b);
    return 0;
}
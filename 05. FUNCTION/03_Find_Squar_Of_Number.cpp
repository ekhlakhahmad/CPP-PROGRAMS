#include<iostream>
using namespace std;
int square(int x);

int square(int x){
    int s;
    s = x * x;

    cout<<"Square of "<<x<<" = "<<s;
    return (s);
}

int main(){
    int a;
    cout<<"Enter any number: ";
    cin>>a;

    square(a);
    return 0;
}
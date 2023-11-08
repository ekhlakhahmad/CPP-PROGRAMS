// Write a program to calculate X Raised to power y.

#include<iostream>
using namespace std;
int main(){
    int i, x, y, power = 1;
    cout<<"Enter value of x : ";
    cin>>x;

    cout<<"Enter value of y : ";
    cin>>y;

    for(i = 1; i <= y; i++){
        power = power * x;
    }

        cout<<x <<" Rased to Power "<<y<<" = "<<power;

    return 0;
}
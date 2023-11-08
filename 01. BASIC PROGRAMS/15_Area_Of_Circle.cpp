// Write a program to calculate the Area of a Circle.

#include<iostream>
using namespace std;
int main(){
    float r, area;
    cout<<"Enter Radius of sphere: ";
    cin>>r;

    area = 3.14 * r * r;

    cout<<"Area of Circle = "<<area;

    return 0;
}
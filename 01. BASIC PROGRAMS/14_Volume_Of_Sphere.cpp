// Write a program to calculate the volume of a sphere.

#include<iostream>
using namespace std;
int main(){
    float r, radius;
    cout<<"Enter Radius of sphere: ";
    cin>>r;

    radius = (4 * 3.14 * r * r * r)/3;

    cout<<"Volume of Sphere = "<<radius;

    return 0;
}
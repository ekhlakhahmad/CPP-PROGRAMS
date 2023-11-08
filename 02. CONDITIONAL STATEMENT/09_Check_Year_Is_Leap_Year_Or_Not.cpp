// Write a program to check the given year is leap year or not.

#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter year: ";
    cin>>y;

    if(y % 4 == 0){
        cout<<"This year is Leap Year";
    }

    else{
        cout<<"This year is Not a Leap Year";
    }

    return 0;
}
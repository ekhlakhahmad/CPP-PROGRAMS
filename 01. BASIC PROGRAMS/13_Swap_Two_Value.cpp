// Write a program to print the swap two value using another variable.

#include<iostream>
using namespace std;
int main(){
    int firstNo, secondNO;
    cout<<"Enter First Number: ";
    cin>>firstNo;
    cout<<"Enter Second Number: ";
    cin>>secondNO;

    int temp = firstNo;
    firstNo = secondNO;
    secondNO = temp;

    cout<<"After swaped value First No = "<<firstNo<<endl;

    cout<<"After swaped value Second No = "<<secondNO<<endl;
    return 0;
}
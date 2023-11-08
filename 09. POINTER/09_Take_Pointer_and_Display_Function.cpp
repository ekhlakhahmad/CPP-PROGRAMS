// Write a function which will take pointer and display the number on screen. Take number from user and print it on screen using that function.

#include<iostream>
using namespace std;

void display(int *ptr){
    cout<<*ptr<<endl;
}

int main(){
    int x;
    cout<<"Enter any number: ";
    cin>>x;

    display(&x);
    return 0;
}
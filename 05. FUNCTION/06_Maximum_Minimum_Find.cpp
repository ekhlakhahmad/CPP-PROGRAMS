// Write a program to find the maximum number and minimum number from three given number from the user input.

#include<iostream>
using namespace std;
int max(int, int, int);
int min(int, int, int);

int main(){
    int x,y,z;
    cout<<"Enter three Number : ";
    cin>>x>>y>>z;

    max(x,y,z);
    min(x,y,z);

    return 0;
}

int max(int a, int b, int c){
    if(a > b && a > c)
        cout<<"Maximum Number is "<<a<<endl;

    else if(b > c && b > a)
        cout<<"Maximum Number is "<<b<<endl;

    else
        cout<<"Maximum Number is "<<c<<endl;

    return 0;
    
}

int min(int a, int b, int c){
    if(a < b && a < c)
        cout<<"Minimum Number is "<<a<<endl;
    
    else if(b < a && b < c)
        cout<<"Minimum Number is "<<b<<endl;

    else
        cout<<"Minimum Number is "<<c<<endl;

    return 0;
}


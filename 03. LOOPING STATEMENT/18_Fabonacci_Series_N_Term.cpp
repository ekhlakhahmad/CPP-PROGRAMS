// Write a program to find the Fibonacci Series till Nth given by the user.

#include<iostream>
using namespace std;
int main(){
    int n, x, y, z, count;
    cout<<"Enter No of Term: ";
    cin>>n;

    x = 0;
    y = 1;
    z = 0;

    for(count = 0; count <= n; count++){
        cout<<z<<endl;

        x = y;
        y = z;
        z = x+y;
    }
        return 0;

}
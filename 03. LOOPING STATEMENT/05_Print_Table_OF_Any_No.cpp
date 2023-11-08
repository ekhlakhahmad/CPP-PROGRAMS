// Write a program to print the table of given number using while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    int i = 1;
    while(i <= 10){
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
        i++;
    }

    return 0;
}
// Write a program to print the counting from given number to 1 using while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    int i = 1;
    while(i <= n){
        cout<<n<<endl;
        n--;
    }

    return 0;
}
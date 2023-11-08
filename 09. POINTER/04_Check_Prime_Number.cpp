// Write a program to check the given number is prime number or not.

#include<iostream>
using namespace std;
int main(){
    int n, *p, count = 0;

    cout<<"Enter any Number: ";
    cin>>n;

    p = &n;

    for(int i = 1; i <= *p; i++){

        if(*p % i == 0){
            count = count + 1;
        }
    }

    if(count == 2)
        cout<<"This is Prime Number"<<endl;
    else
        cout<<"This is Not a Prime Number"<<endl;

    return 0;
}
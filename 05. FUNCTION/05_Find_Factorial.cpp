#include<iostream>
using namespace std;
int fact(int x);

int fact(int x){
    int fact = 1;

    for(int i = 1; i <= x; i++){
        fact = fact * i;
    }

    cout<<"Factorial of "<<x<<" = "<<fact;
    return (fact);
}

int main(){
    int a;
    cout<<"Enter any number: ";
    cin>>a;

    fact(a);
    return 0;
}
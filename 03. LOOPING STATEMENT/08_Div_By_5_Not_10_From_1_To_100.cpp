// Write a program to print that number which divisible by 5 not divisible by 10, and that number is from 1 to 100.

#include<iostream>
using namespace std;
int main(){
    int i;

    for(i = 1; i <= 100; i++){

        if(i % 5 == 0 && i % 10 != 0){
            cout<<i<<endl;
        }

    }

    return 0;
}
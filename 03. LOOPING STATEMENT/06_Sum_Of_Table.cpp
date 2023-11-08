// Write a program to print the sum of the table of given number using do while loop.

#include<iostream>
using namespace std;
int main(){
    int n, i, sum = 0;
    cout<<"Enter any number: ";
    cin>>n;
    i = 1;
    do
    {
       int temp = n * i;
       sum = sum + temp;
        i++;

    } while (i <= 10);

    cout<<sum<<endl;

    return 0;
    
}
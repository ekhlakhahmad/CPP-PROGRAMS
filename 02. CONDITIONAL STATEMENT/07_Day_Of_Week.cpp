// Write a program to find the week day name after press week day number.

#include<iostream>
using namespace std;
int main(){
    int d;
    cout<<"Press the any number of Day from 0 to 6 : ";
    cin>>d;

    if(d == 0)
        cout<<"Sunday";

        else if(d == 1)
            cout<<"Monday";
        
        else if(d == 2)
            cout<<"Tuesday";

        else if(d == 3)
            cout<<"Wednesday";

        else if(d == 4)
            cout<<"Thursday";

        else if(d == 5)
            cout<<"Friday";

        else if(d == 6)
            cout<<"Saturday";

        else 
            cout<<"Invalid number";

        return 0;        
}
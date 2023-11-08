// Write a program to find the days of the months.

#include<iostream>
using namespace std;
int main(){
    int m, y;

    cout<<"Enter any months number: ";
    cin>>m;

    if(m == 2){

        cout<<"Enter year in this months: ";
        cin>>y;

        if(y % 4 == 0){
            cout<<"This months in 28 days";
        }

        else{
            cout<<"This months in 29 days";
        }
    }
    
    else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
        cout<<"This months in 31 days";

    else if(m == 4 || m == 6 || m == 9 || m == 11)
        cout<<"This months in 30 days";

    else 
        cout<<"Invalid number Please Enter correct number";

    return 0;
    

}
#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    int digit = 0;

    cout<<"Enter any number: ";
    cin>>n;

    for(i = 1; i <= n; i++){

        for(j = 1; j <= i; j++){
            digit = i % 2;
            cout<<digit<<" ";
        }

        cout<<endl;
    }

    return 0;
}
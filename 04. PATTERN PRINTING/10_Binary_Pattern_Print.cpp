#include<iostream>
using namespace std;
int main(){
    int n, i, j;

    cout<<"Enter any number: ";
    cin>>n;

    for(i = 1; i <= n; i++){

        for(j = 0; j < n; j++){

            cout<<(j + i) % 2<< " ";
        }

        cout<<endl;
    }

    return 0;
}
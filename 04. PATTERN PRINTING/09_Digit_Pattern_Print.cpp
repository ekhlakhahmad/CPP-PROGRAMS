#include<iostream>
using namespace std;
int main(){
    int n, i, j, p = 0;

    cout<<"Enter any number: ";
    cin>>n;

    for(i = 1; i <= n; i++){

        for(j = 1; j <= n; j++){

            p = i * j;
            cout<<p<<"\t";
        }

        cout<<endl;
    }

    return 0;
}
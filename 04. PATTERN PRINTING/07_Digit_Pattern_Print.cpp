#include<iostream>
using namespace std;
int main(){
    int n, i, j, p = -1;

    cout<<"Enter any number: ";
    cin>>n;

    for(i = 1; i <= n; i++){

        for(j = 1; j <= n; j++){

            p = p + 2;
            cout<<"\t"<<p;
        }

        cout<<endl;
    }

    return 0;
}
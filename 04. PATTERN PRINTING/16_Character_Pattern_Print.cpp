#include<iostream>
using namespace std;
int main(){
    char i, j;

    for(i = 'E'; i >= 'A'; i--){

        for(j = 'E'; j >= 'A'; j--){

            cout<<i<<" ";
        }

        cout<<endl;
    }

    return 0;
}
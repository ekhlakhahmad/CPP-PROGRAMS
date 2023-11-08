// Write a program to check the given character is Small character or Capital character form.

#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Type any character:\n";
    cin>>c;

    if(c >= 'a' && c <= 'z'){
        cout<<c<<" is Small character";
    }

    else if(c >= 'A' && c <= 'Z'){
        cout<<c<<" is Capital character";
    }

    else{
        cout<<c<<" is Invalid character";
    }

    return 0;
}
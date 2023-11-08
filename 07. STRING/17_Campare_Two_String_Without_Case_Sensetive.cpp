// Write a program to compare two string without case sensetive using built-in function.

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[50];
    char b[50];

    cout<<"Enter First String: ";
    gets(a);

    cout<<"Enter Second String: ";
    gets(b);

    if(strcmpi(a,b) == 0)
        cout<<"Both String are Same"<<endl;
    
    else if(strcmpi(a,b) > 0)
        cout<<"First String is Greater"<<endl;
    
    else
        cout<<"First String is Smaller"<<endl;

    return 0;
}
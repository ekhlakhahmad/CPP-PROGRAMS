// Write a program to find length of string.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter any Word or Sentence: ";
    getline(cin, str);

    int len = str.length();

    cout<<"Length of This Word or Sentence = "<<len;
}
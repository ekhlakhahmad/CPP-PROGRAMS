// Write a program to find the number of word without predefined function.

#include<iostream>
using namespace std;
int main(){
    char a[100];
    int word = 1;
    cout<<"Enter any Word or Sentences: ";
    gets(a);

    int i = 0;
    while(a[i] != '\0'){
    
    if(a[i] == ' ')
    word = word + 1;
    
    i++;
    }

    cout<<"Total Word = "<<word;

    return 0;
}
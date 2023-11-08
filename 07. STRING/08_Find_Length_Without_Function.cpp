// Write a program to find the length or string or character without predefined function .length().

#include<iostream> 
using namespace std;
int main(){
    char a[50];
    cout<<"Enter any Word :";
    gets(a);

    int i=0;
    while(a[i] != '\0')
        i++;
    cout<<"Total Length or Word = "<<i;

    return 0;
}
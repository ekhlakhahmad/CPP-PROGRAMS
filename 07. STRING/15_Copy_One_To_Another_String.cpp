// Write a program to copy string one variable to another variable.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[50];
    char b[50];

    cout << "Original value = ................" << endl;
    cout << "Enter your Duplicate value : ";
    gets(b);

    cout << "Original Value = " << strcpy(a, b);
}
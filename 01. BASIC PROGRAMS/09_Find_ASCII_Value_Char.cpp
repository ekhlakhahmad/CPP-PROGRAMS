// Write a program to find the ASCII value of a character.

#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Type any Character: ";
    cin >> c;

    cout << "ASCII Value of " << c << " = " << int(c);

    return 0;
}
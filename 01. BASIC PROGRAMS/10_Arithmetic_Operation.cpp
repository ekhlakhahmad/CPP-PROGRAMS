// Write a program to find arithmetic operation like: Addition, Subtraction, Multiplication, Division, and Remainder.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter any Two number: ";
    cin >> a >> b;

    cout << "Addition = " << a + b << endl;
    cout << "Subtration = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    cout << "Remainder = " << a % b << endl;

    return 0;
}
// Write a program to find Quotient and Remainder.

#include <iostream>
using namespace std;
int main()
{
    int q, r, d, n;
    cout << "Enter Any Number: ";
    cin >> n;
    cout << "Enter Divisior: ";
    cin >> d;

    q = n / d;
    r = n % d;

    cout << "Quotient = " << q << endl;
    cout << "Remainder = " << r << endl;

    return 0;
}
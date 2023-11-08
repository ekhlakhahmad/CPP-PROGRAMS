// Write a program to Swap Two numbers without using third variable.

#include <iostream>
using namespace std;
int main()
{
    int a, b, swap;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swaped First No = " << a << endl;
    cout << "After Swaped Second No = " << b << endl;
    return 0;
}
// Write a program to add two number (Enter by the user).

#include <iostream>
using namespace std;
int main()
{
    int a, b, sum;
    cout << "Enter any two number: ";
    cin >> a >> b;

    sum = a + b;

    cout << "Sum of " << a << " and " << b << " = " << sum;

    return 0;
}
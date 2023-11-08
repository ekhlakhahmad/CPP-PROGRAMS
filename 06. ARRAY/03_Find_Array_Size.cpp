// Write a program to Find Array of Size.

#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 5, 6, 9, 8, 7, 1, 12, 34, 65};
    int b[10];

    // size whole array , one integer 4 byte then 10 digit = 4 x 10.

    int x = sizeof(a);

    // size of one element 4 bytes.

    int y = sizeof(a[0]);

    // assign s1 whole size divide by one element size = 40 / 4 = 10

    int s1 = sizeof(a) / sizeof(a[0]);

    // assign s2 whole size of array b, divide by one element of b array = 40 / 4 = 10.

    int s2 = sizeof(b) / sizeof(b[0]);

    // size of array a i.e how much element in array. 
    
    int s3 = size(a);

    cout << x << " " << y << " " << s1 << " " << s2 << " " << s3;
}
// Write a program to Sort the Array Element using Selection Sort.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 5, 6, 9, 8, 7, 4, 16, 3, 1};
    int n = size(arr);

    cout << "Sorted Element = ";

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}